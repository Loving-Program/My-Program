/*
自定义函数to_lowercase，实现对一个字符串指针全部变小写的操作；
并在main函数中验证该函数。
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


