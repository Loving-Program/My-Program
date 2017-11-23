//写一包含20个元素的数组，填充从斐波那契数列的前20个数。
#include <stdio.h>
#include <math.h>
void main()
{
	int i,c[20]={1,1};
	for(i=2;i<20;i++)
		c[i]=c[i-2]+c[i-1];
	for(i=0;i<20;i++)
		printf("%d\n",c[i]);



} 
