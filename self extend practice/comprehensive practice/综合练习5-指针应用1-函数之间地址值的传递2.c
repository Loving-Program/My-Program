/*综合练习5-指针应用1-函数之间地址值的传递2
子函数间的相互调用 
从小到大输出两个数 
*/ 
#include <stdio.h>
void change();//change函数声明必须写在主函数外并用分号隔开 
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
	if(*a>*b)
		change(a,b);	
}
void change(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

