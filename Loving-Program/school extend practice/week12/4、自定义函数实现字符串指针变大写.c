/*
�Զ��庯��to_lowercase��ʵ�ֶ�һ���ַ���ָ��ȫ�����д�Ĳ�����
����main��������֤�ú�����
*/ 
#include <stdio.h>
#include <string.h>
void main()
{
	void to_uppercase();
	char up[10];
	char *str=up;
	int len;
	printf("please input some characters:\n");
	scanf("%s",up);
	len=strlen(up);
	to_uppercase(str,len);
}
void to_uppercase(char *str,int len)
{
	int i;
	char up1[10];
	strncpy(up1,str,len);
	printf("%s",strupr(up1));
}


