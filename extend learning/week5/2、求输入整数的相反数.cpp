//求输入整数的相反数
#include<stdio.h>
void main()
{
	void opposite();
	opposite();
}
void opposite()
{
	int i,j;
	printf("请输入一个整数:");
	scanf("%d",&i);
	j=-i;
	printf("输入整数的相反数是:%d\n",j);
}