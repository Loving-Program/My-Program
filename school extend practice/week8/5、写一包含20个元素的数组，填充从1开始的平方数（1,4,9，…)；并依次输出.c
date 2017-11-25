//写一包含20个元素的数组，填充从1开始的平方数（1,4,9，…)；并依次输出。
#include <stdio.h>
void main()
{
	int a,b,c[20];
	for(a=1,b=0;b<=19;a++,b++)
		c[b]=a*a;//填充平方数 
	for(b=0;b<=19;b++)
		printf("%d\n",c[b]);//输出元素 



}
