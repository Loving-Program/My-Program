//闭卷输出最大整数及其加一值
#include <stdio.h>
void main()
{
	int a,b,c,max;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>=max)
		max=b;
	if(c>=max)
		max=c;
	printf("%d为最大值,%d为最大值+1",max,max+1);
}