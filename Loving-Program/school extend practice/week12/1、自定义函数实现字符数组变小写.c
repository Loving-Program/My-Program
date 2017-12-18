/*
自定义函数to_lowercase，实现对一个字符数组全部变小写的操作；
并在main函数中验证该函数。
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

