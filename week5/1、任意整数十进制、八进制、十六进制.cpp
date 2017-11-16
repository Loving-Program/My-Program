//任意整数十进制、八进制、十六进制
#include<stdio.h>
void main()
{
	int i;
	printf("请输入一个整数:");
	scanf("%d",&i);
	printf("%d	%o	%x",i,i,i);
}