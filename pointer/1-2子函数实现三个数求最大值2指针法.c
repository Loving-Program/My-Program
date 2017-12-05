/*子函数实现三个数求最大值2
实参为数组名，形参为指针 
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
int max3(int *p)//数组、指针可相互转化 
{
	int max,i;
	max=*p;
	for(i=0;i<3;i++)
    if(*(p+i)>max)
    	max=*(p+i);
    printf("max=%d",max);
	return 0;
	
}
