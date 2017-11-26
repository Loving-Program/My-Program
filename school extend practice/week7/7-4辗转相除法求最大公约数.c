//辗转相除法求最大公约数 
#include <stdio.h>
void main()
{
	int a,b,m,n;
	printf("please input two integers：\n");
	scanf("%d%d",&a,&b);
	do
	{
		m=a%b;//计算a除以b的余数
		a=b;//让a等于b 
		b=m;//让b等于余数 
	}
	while(b!=0);//b等于0时，计算结束，a为最大公约数 
	printf("The largest common divisor:%d\n",a);//输出最大公约数 

}
