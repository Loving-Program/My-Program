//evaluate pi method 1
#include <stdio.h>
int main()
{
	double sum=1,i;
	int n;
	for(n=2,i=3;n<=1000;n++,i=i+2)
		{
			if(n%2==0)//nΪż�� 
				sum=sum-1.0/i;
			else//nΪ���� 
				sum=sum+1.0/i;
		}
	printf("pi=%.3f\n",4*sum);
}
/*
��/4=1-1/3+1/5-1/7+1/9... 
�տ�ʼ���߼��ϵĴ���������forѭ���ṹ
for(n=2,n<=1000,n++)
	for(i=3,i<=1999,i=i+2)
��ʵ����Ƕ��ѭ��������n��iͬʱѭ�� 
*/ 
