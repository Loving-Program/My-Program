/*求解鸡兔同笼问题：
	有若干只鸡兔同在一个笼子里，有a个头，有b只脚。问笼中鸡兔各多少？
*/
#include<stdio.h>
void main()
{
	int x,y,a,b;
	printf("请输入笼中头的总数、脚的总数：");
	scanf("%d%d",&a,&b);
	x=(4*a-b)/2;
	y=(b-2*a)/2;
	printf("笼中有鸡%d只，有兔%d只",x,y);
}
/*
x+y=a
2x+4y=b
*/