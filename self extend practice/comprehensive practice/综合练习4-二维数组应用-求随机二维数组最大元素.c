/*综合练习（四）二维数组应用 
求随机二维数组最大元素 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{
	int getrand();
	int max();
	int a[6][6],b;
	getrand(a);
	printf("max=%d",max(a));
} 
int getrand(int a[][6])//调用C库函数中随机函数给数组a赋值 
{
	int i,j; 
	int number;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			a[i][j]=rand()%1000; //产生0-999的随机数，rand取值范围0-32767 
				printf("%d\t", *(*(a+i)+j));//打印输出二维数组 
		}
		printf("\n");
	}
	return 0;
}
int max(int a[][6])//注意二维数组再进行传递时*a不合法，a[][]也不合法 
{
	int max1,i,j;
	max1=a[0][0];
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)//比较大小 
		{
			if(*(a[i]+j)>max1)
				max1=*(a[i]+j);
		}
	return max1;
}
/*IMPORTANT:
1、二维数组进行参数传递时形参形式；
2、二维数组元素不同表示方法的正确理解和应用。 
*/ 
