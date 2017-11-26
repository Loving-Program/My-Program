//evaluate pi method 2
#include <stdio.h>
int main()
{
	double sum=0.0,i;
	int n,sign=1;//优化：double sign=1.0
	for(i=1;i<=10000;n++,i=i+2)
		{
			sum=sum+sign*1.0/i;//sum+=sign/i
			sign=-sign;//优化：实现符号的要求 
		}
	printf("pi=%.3f\n",4*sum);
}
/*
π/4=1-1/3+1/5-1/7+1/9...  
*/ 

