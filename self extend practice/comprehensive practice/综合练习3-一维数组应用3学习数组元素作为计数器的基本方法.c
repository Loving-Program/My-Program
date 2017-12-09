/*综合练习3-一维数组应用2学习数组元素作为计数器的基本方法
数组生成若干个0-9的随机数，统计每个整数个数  
*/
#include <stdio.h>
int main()
{
	void getrand();
	int stat(),i; 
	int a[50],c[10]={0};
	getrand(a);
	stat(a,c);
	for(i=0;i<10;i++)
	printf("%d:%d\n",i,c[i]);

}
void getrand(int *a)//调用C库函数中随机函数给数组a赋值 
{
	int i;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	                              //NULL表示取当前的时间 
	for(i=0;i<50;i++)
	{
		*(a+i)=rand()%10; //产生0-9的随机数
//		printf(((i+1)%5==0)?"%d\n":"%d\t",*(a+i));//根据i值不同判断是否换行 
		printf("%d\t",*(a+i));//两种形式等价 
			if((i+1)%5==0) 
				printf("\n");
	}
	printf("\n");
}
int stat(int *a,int *c)
{
	int i;
	for(i=0;i<50;i++)
		c[a[i]]++;
	return c;
}

