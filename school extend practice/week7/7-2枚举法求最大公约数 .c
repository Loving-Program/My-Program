//枚举法求最大公约数
#include <stdio.h>
void main()
{
	int a,b,i,n,min;
	printf("please input two integers:\n");
	scanf("%d%d",&a,&b); 
	if(a>b)
		min=b;
	else
		min=a;
	for(i=2;i<=min;i++)
		if(a%i==0)
		{
			if(b%i==0)
			n=i;
		 } 
	printf("The largest common divisor:%d\n",n);//输出最大公约数 


}

