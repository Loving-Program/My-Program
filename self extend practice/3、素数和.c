//素数和 
#include <stdio.h>
void main()
{
	int i,j=0,k,num,sum=0,m,n,a[100];
	printf("input two integers between 0 and 1000:\n");//给定两个整数m,n 
	scanf("%d%d",&m,&n);
	for(num=2;num<=100;num++)//求2-100素数 
	{
		for(i=2;i<=num-1;i++)
		{	
			if(num%i==0)
			break;
		}
	if(i>=num)
	{
		a[j]=num;//将素数填充到数组中 
		j++;
	}
	}
	for(k=m-1;k<=n-1;k++)//计算第m个素数到第n个素数之间所有的素数的和，包括第m个素数和第n个素数。
		sum=sum+a[k];
	printf("sum=%d",sum);
	
}

