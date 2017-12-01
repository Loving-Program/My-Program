//分解质因数
#include <stdio.h>
void main()
{
	int i,j,k,x,x1,a;
	printf("please input an integer:\n")	
	scanf("%d", &x);	
	for(i=2;i<=x-1;i++)
		{	
			if(x%i==0)
				break;
		}
	if(i<x)
	{
		if(x%2==0)
		{
			do
				x1=x/2;
			while
				(x1%2==0);
			}
		else
		{
			do
				x1=x/3;
			while
				(x1%3==0);
			}
	}
	else
		printf("%d是素数\n",x);
	


}

