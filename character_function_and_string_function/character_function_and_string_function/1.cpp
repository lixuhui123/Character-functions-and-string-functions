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
	//str字符串中的标记是i m a ,找到分隔符之后将分隔符符的位置为空，将产生的字符串首地址
	//给tok输出，下一次再从当前位置找分隔符，然后赋赋值输出，直到找到最后一个单词。使得
	//tok=NULL
	puts(str);
	system("pause");
	return 0;
}