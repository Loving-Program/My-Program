//字符大小写转换
#include <stdio.h>
void main()
{
	char i;
	printf("请输入一个字符:");
	scanf("%c",&i);
	if(i>=65&&i<=90)
		printf("%c",i+32);
	else if(i>=97&&i<=122)
		printf("%c",i-32);
	else
		printf("输入错误\n");
}