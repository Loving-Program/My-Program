/*
�Զ��庯��to_lowercase��ʵ�ֶ�һ���ַ�����ȫ����Сд�Ĳ�����
����main��������֤�ú�����
*/ 
#include <stdio.h>
#include <string.h>
void main()
{
	void to_lowercase();
	char low[10];
	printf("please input some characters:\n");
	scanf("%s",low);
	to_lowercase(low);
}
void to_lowercase(char *low)
{
	printf("%s",strlwr(low));
}

