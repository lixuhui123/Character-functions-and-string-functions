#include<stdio.h>
#include<stdlib.h>
#include<string>
//strtok
int main()
{
	//i,am. a student
	char str[] = "i,am. a student";
	char sep[] = ",. ";
	char *tok = NULL;
	for (tok = strtok(str, sep); tok != NULL; tok = strtok(NULL, sep))
	{
		puts(tok);
	}
	//str�ַ����еı����i m a ,�ҵ��ָ���֮�󽫷ָ�������λ��Ϊ�գ����������ַ����׵�ַ
	//��tok�������һ���ٴӵ�ǰλ���ҷָ�����Ȼ�󸳸�ֵ�����ֱ���ҵ����һ�����ʡ�ʹ��
	//tok=NULL
	puts(str);
	system("pause");
	return 0;
}