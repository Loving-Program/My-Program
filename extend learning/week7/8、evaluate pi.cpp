//evaluate pi
#include <stdio.h>
int main()
{
	double sum=1,i;
	int n;
	for(n=2,i=3;n<=1000;n++,i=i+2)
		{
			if(n%2==0)
				sum=sum-1.00/i;
			else
				sum=sum+1.00/i;
		}
	printf("pi=%.3f\n",4*sum);
}
/*�տ�ʼ���߼��ϵĴ���������forѭ���ṹ
for(n=2,n<=1000,n++)
	for(i=3,i<=1999,i=i+2)
��ʵ����Ƕ��ѭ��������n��iͬʱѭ�� 
*/ 
