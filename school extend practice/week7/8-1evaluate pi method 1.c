//evaluate pi method 1
#include <stdio.h>
int main()
{
	double sum=1,i;
	int n;
	for(n=2,i=3;n<=1000;n++,i=i+2)
		{
			if(n%2==0)//n为偶数 
				sum=sum-1.0/i;
			else//n为奇数 
				sum=sum+1.0/i;
		}
	printf("pi=%.3f\n",4*sum);
}
/*
π/4=1-1/3+1/5-1/7+1/9... 
刚开始有逻辑上的错误，误用了for循环结构
for(n=2,n<=1000,n++)
	for(i=3,i<=1999,i=i+2)
其实并非嵌套循环，而是n、i同时循环 
*/ 
