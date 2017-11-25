//使用循环的方式，解决鸡兔问题。
#include <stdio.h>
#include <math.h>
void main()
{
	int x,y,a,b,m,n;
	printf("请输入笼中头的总数、脚的总数：\n");
	scanf("%d%d",&a,&b);
	for(x=0;x<=a;x++)
		for(y=a-x;y>=0;y--)
		{
			if(2*x+4*y==b)
			{
				m=x;
				n=y;
			}
		}
	printf("笼中有鸡%d只，有兔%d只\n",m,n);	
	
}
