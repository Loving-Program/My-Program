//������ 
#include <stdio.h>
void main()
{
	int i,j=0,k,num,sum=0,m,n,a[100];
	printf("input two integers between 0 and 1000:\n");//������������m,n 
	scanf("%d%d",&m,&n);
	for(num=2;num<=100;num++)//��2-100���� 
	{
		for(i=2;i<=num-1;i++)
		{	
			if(num%i==0)
			break;
		}
	if(i>=num)
	{
		a[j]=num;//��������䵽������ 
		j++;
	}
	}
	for(k=m-1;k<=n-1;k++)//�����m����������n������֮�����е������ĺͣ�������m�������͵�n��������
		sum=sum+a[k];
	printf("sum=%d",sum);
	
}

