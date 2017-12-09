/*综合练习3-一维数组应用2将数组中的数按颠倒的顺序重新存放。
操作时，只能借助一个临时存储单元不得另外开辟数组。 
*/ 
#include <stdio.h>
int main()
{
	void getrand(int *a);
	void invert(int *a);
	int a[8]; 
	getrand(a);
	invert(a);
}
void getrand(int *a)//调用C库函数中随机函数给数组a赋值 
{
	int i; 
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	                              //NULL表示取当前的时间 
	for(i=0;i<8;i++)
	{
		*(a+i)=rand()%50; //产生0-49的随机数，rand取值范围0-32767 
		printf("%d\t", *(a+i));//输出数组中元素 
	}
	printf("\n");
}
void invert(int *a)
{
	int i,j,t;
	for(i=0,j=7;i<4;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;	
	}
	for(i=0;i<8;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

