/*
�Զ��庯��to_lowercase��ʵ�ֶ�һ���ַ�����ȫ�����д�Ĳ�����
����main��������֤�ú�����
*/ 
#include <stdio.h>
#include <string.h>
void main()
{
	void to_uppercase();
	char up[10];
	printf("please input some characters:\n");
	scanf("%s",up);
	to_uppercase(up);
}
void to_uppercase(char *up)
{
	printf("%s",strupr(up));
}

