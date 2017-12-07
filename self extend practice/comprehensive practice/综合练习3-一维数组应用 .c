//综合练习（三）一维数组应用 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{
	void getrand();
	void sum();
	void priarr();
	int a[9],sum3[3];
	getrand(a);
	sum(a,sum3);
	priarr(sum3);
} 
void getrand(int *a)//调用C库函数中随机函数给数组a赋值 
{
	int i; 
	int number;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	                              //NULL表示取当前的时间 
	for(i=0;i<9;i++)
	{	*(a+i)=rand()%50; //产生0-49的随机数，rand取值范围0-32767 
		printf("%d\t", *(a+i));//输出数组中元素 
	}
	printf("\n");
}
void sum(int *a,int *sum3)
{
	int i,j;
	for(i=0,j=0;i<3;i++,j=j+3)
		sum3[i]=a[j+0]+a[j+1]+a[j+2];//按顺序对每三个数求一个和并传回主函数 
}
void priarr(int *sum3)
{
	int i;
	for(i=0;i<3;i++)
		printf("%d\t",sum3[i]);//输出所有求出的和值 
}
