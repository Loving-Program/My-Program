//写一包含20个元素的数组，填充从1开始的各个整数的平方根；并依次输出。
#include <stdio.h>
#include <math.h>
void main()
{
	int a,b;
	float c[20];
	for(a=1,b=0;b<=19;a++,b++)
		c[b]=sqrt(a);//填充平方根 
	for(b=0;b<=19;b++)
		printf("%f\n",c[b]);//输出元素 



} 
