//字符串的输入输出 
#include <stdio.h>
int main()
{
	char str1[10];
	char str2[10],str3[10];
	gets(str1);//输入一个字符串 
	scanf("%s%s",str2,str3);//输入两个字符串 
	puts(str1);//输出一个字符串 
	printf("str2=%s\nstr3=%s\n",str2,str3);//输出两个字符串 
}

