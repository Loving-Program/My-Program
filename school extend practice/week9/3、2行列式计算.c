//2*2行列式计算 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{ 
	int m,n,det,a[2][2]; 
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			a[m][n]=rand()%100; //产生0-1000的随机数
	printf("array a:\n");
	for(m=0;m<=1;m++)
	{
		for(n=0;n<=1;n++)
		{	
			printf("%d\t",a[m][n]);
			if(n==1)
				printf("\n");//打印2*2数组 
		}
	}
	det=a[0][0]*a[1][1]-a[0][1]*a[1][0];//对角线上元素相乘，主对角线减去次对角线 
	printf("sum of determinant=%d",det);
}
