/*
�Զ��庯��to_lowercase��ʵ�ֶ�һ���ַ���ָ��ȫ����Сд�Ĳ�����
����main��������֤�ú�����
*/ 
#include <stdio.h>
#include <string.h>
void main()
{
	void to_lowercase();
	char low[10];
	char *str=low;
	int len;
	printf("please input some characters:\n");
	scanf("%s",low);
	len=strlen(low);
	to_lowercase(str,len);
}
void to_lowercase(char *str,int len)
{
	int i;
	char low1[10];
	strncpy(low1,str,len);
	printf("%s",strlwr(low1));
}


