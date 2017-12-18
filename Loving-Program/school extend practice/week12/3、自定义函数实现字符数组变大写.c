/*
自定义函数to_lowercase，实现对一个字符数组全部变大写的操作；
并在main函数中验证该函数。
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

