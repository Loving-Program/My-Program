//���ά����ÿһ��ÿһ�еĺ� 
#include <stdlib.h>
#include <time.h> //�õ���time���� 
#include <stdio.h>
int main()
{
	int i,j,a[3][4],num;
	int sum1=0,sum2=0;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	printf("random array:\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			{
				num=rand()%10; //����0-1000�������
				printf("%d\t",a[i][j]=num);//ʹ������������
			}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
			for(j=0;j<=3;j++)
				sum1=sum1+a[i][j];
			printf("row[%d]=%d\n",i,sum1);//��ӡ���ÿһ�еĺ� 
			sum1=0;
	}
	for(j=0;j<=3;j++)
	{
			for(i=0;i<=2;i++)
				sum2=sum2+a[i][j];
			printf("col[%d]=%d\n",j,sum2);//��ӡ���ÿһ�еĺ� 
			sum2=0;
	}
}

