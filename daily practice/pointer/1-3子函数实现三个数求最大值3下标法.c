/*子函数实现三个数求最大值3
实参、形参均为数组 
*/ 
#include "stdio.h"
void main()
{
	int a[3],i;
	int max3(int *p);
	for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    max3(a);
}
int max3(int *p)//数组p、数组a完全等价 
{
	int max,i;
	max=p[0];
	for(i=0;i<3;i++)
    if(p[i]>max)
    	max=p[i];
    printf("max=%d",max);
	return 0;
	
}
