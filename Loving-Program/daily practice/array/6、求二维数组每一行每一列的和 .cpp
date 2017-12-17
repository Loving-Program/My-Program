//求二维数组每一行每一列的和 
#include <stdlib.h>
#include <time.h> //用到了time函数 
#include <stdio.h>
int main()
{
	int i,j,a[3][4],num;
	int sum1=0,sum2=0;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	printf("random array:\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			{
				num=rand()%10; //产生0-1000的随机数
				printf("%d\t",a[i][j]=num);//使用随机数填充数
			}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
			for(j=0;j<=3;j++)
				sum1=sum1+a[i][j];
			printf("row[%d]=%d\n",i,sum1);//打印输出每一行的和 
			sum1=0;
	}
	for(j=0;j<=3;j++)
	{
			for(i=0;i<=2;i++)
				sum2=sum2+a[i][j];
			printf("col[%d]=%d\n",j,sum2);//打印输出每一行的和 
			sum2=0;
	}
}

