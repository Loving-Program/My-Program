//��ʮ�������������һϵ����ϰ
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int i,j,t,num,sum=0,a[10];
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	printf("random numbers:\n");
	for (i=0,j=0;i<50,j<=9; i++,j++)
	{
		num=rand()%1001; //����0-1000�������
		printf("%d\n",a[j]=num);
	}
	for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
		if(a[i]<a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;		
		}
	printf("sorted numbers:\n");
	for(i=0;i<=9;i++)
		printf("%d\n",a[i]);
	for(i=0;i<=9;i++)
		sum=sum+a[i];
	printf("sum=%d\naverage=%.2f\n",sum,1.0f*sum/10);
	
} 
