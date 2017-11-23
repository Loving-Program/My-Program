//Fibonacci series
#include <stdio.h>
void main()
{
	int i,a[24]={1,1};
	for(i=2;i<=23;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<=23;i++)
		printf("%d\n",a[i]);
	

}

