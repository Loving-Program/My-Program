/*综合练习5-指针应用1-函数之间地址值的传递1
从小到大输出两个数 
*/ 
#include <stdio.h>
int main()
{
	void order();
	int a,b;
	scanf("%d%d",&a,&b);
	order(&a,&b);
	printf("%d %d",a,b);
}
void order(int *a,int *b)
{
	int t;
	if(*a>*b)
	{
		t=*a;
		*a=*b;
		*b=t;
	}
	
}
