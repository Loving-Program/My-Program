#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{ 
	int i,j,m,n,max,num,a[3][4];
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	printf("random array:\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			{
				num=rand()%1000; //产生0-1000的随机数
				printf("%d\t",a[i][j]=num);//使用随机数填充数
			}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				m=i;
				n=j;
			}
		}
	printf("max=%d\nraw=%d\ncolumn=%d",max,m,n);
}
