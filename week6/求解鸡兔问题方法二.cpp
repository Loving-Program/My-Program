//求解鸡兔问题方法二
#include <stdio.h>
#include <math.h>
void main()
{
	int x,y,a,b;
	printf("请输入笼中头的总数、脚的总数：\n");
	scanf("%d%d",&a,&b);
	y=(b-2*a)/2;
	x=a-y;
	printf("笼中有鸡%d只，有兔%d只\n",x,y);
}