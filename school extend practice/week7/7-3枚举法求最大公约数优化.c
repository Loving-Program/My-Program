//ö�ٷ������Լ���Ż� 
#include <stdio.h>
void main()
{
	int a,b,i,n,min;
	printf("please input two integers:\n");
	scanf("%d%d",&a,&b); 
	for(i=2;i<=a&&i<=b;i++)
		if(a%i==0)
		{
			if(b%i==0)
			n=i;
		 } 
	printf("The largest common divisor:%d\n",n);//������Լ�� 


}

