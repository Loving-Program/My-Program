//矩阵相加 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{ 
	int m,n,number;
	int a[2][3],b[2][3],c[2][3]; 
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
		{
			a[m][n]=rand()%100; //产生0-1000的随机数
			b[m][n]=rand()%100;
		} 
	printf("array a:\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			printf("%d\t",a[m][n]);//打印输出数组a 
	printf("\n"); 
	printf("array b:\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			printf("%d\t",b[m][n]);//打印输出数组b 
	printf("\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			c[m][n]=a[m][n]+b[m][n];
	printf("array c = array a + array b:\n"); 
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			printf("%d\t",c[m][n]);//打印输出数组c
	printf("\n");
} 


