/*综合练习4-二维数组应用2-求随机二维数组每行元素平均值 
给五行六列的二维数组赋10-40范围内整数，求出二维数组每行元素平均值 
*/ 
#include <stdio.h>
int main()
{
	void getrand();
	void ave();
	int a[5][6];
	getrand(a);
	ave(a);
}
void getrand(int (*b)[6])
{
	int i,j,num;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	for(i=0;i<5;i++)
		for(j=0;j<6;)
		{
			num=rand()%41; //产生0-40的随机数，rand取值范围0-32767 
			if(num>9)//筛选10-40随机数 
			{	
				b[i][j]=num;
				j++;//将符合范围的整数赋给二维数组元素后才可实行自增运算 
			}
		}
	printf("double diensional array:\n");
	for(i=0;i<5;i++)
	{
		{
			for(j=0;j<6;j++)
				printf("%d\t",b[i][j]);//打印输出二维数组
		}
	printf("\n");//每一行结束实现换行操作 
	}
}
void ave(int c[][6])
{
	int i,j,sum;
	float aver[5]={0.0};//定义浮点型一位数组存放每行平均值 
	for(i=0;i<5;i++){
	{
		sum=0.0;//每次循环开始重新给sum赋值 
		for(j=0;j<6;j++)
			sum+=c[i][j];//求每行元素和 
	}
	aver[i]=1.0f*sum/6;//求每行元素平均值 
	}
	printf("averages:\n"); 
	for(i=0;i<5;i++)
	printf("a[%d]=%f\t",i,aver[i]);
}

