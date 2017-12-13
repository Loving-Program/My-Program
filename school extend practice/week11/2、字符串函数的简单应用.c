//字符串函数的简单应用 
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[10],str3[10];
	gets(str1);
	gets(str2);
	gets(str3);
	printf("length=%d\n",strlen(str1));//输出这个字符串的有效字符个数 
	printf("%s\n",strupr(str2));//将每个字符变成大写输出
	printf("%s\n",strlwr(str3));//将每个字符变成小写输出
}

