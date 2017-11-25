//3*3行列式计算 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{ 
	int m,n,det,a[3][3]; 
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	for(m=0;m<=2;m++)
		for(n=0;n<=2;n++)
			a[m][n]=rand()%100; //产生0-10的随机数
	printf("array a:\n");
	for(m=0;m<=2;m++)
	{
		for(n=0;n<=2;n++)
		{	
			printf("%d\t",a[m][n]);
			if(n==2)
				printf("\n");//打印3*3数组
		}
	}//不同行不同列数组元素相乘，顺时针加法，逆时针减法 
	det=a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[2][1]*a[1][0]-a[0][2]*a[1][1]*a[2][0]-a[0][1]*a[1][0]*a[2][2]-a[0][0]*a[2][1]*a[1][2];
	printf("sum of determinant=%d",det);
}
