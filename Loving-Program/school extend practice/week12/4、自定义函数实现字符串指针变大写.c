/*
自定义函数to_lowercase，实现对一个字符串指针全部变大写的操作；
并在main函数中验证该函数。
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


