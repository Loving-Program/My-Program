//evaluate pi method 2
#include <stdio.h>
int main()
{
	double sum=0.0,i;
	int n,sign=1;//�Ż���double sign=1.0
	for(i=1;i<=10000;n++,i=i+2)
		{
			sum=sum+sign*1.0/i;//sum+=sign/i
			sign=-sign;//�Ż���ʵ�ַ��ŵ�Ҫ�� 
		}
	printf("pi=%.3f\n",4*sum);
}
/*
��/4=1-1/3+1/5-1/7+1/9...  
*/ 

