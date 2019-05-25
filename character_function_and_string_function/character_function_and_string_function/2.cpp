#include <stdio.h> 
#include<stdlib.h>
//qosrt函数的使用者得实现一个比较函数
int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;

	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	//第二个元素数，第三个元素的字节数，第四个函数指针(回调函数)
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
