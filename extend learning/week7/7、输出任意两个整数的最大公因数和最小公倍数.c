//输出任意两个整数的最大公因数和最小公倍数
#include <stdio.h>
void main()
{
	int a,b,m,n;
	printf("please input two integers：\n");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	printf("The largest common divisor:%d\n",a);
	printf("The least common multiple:%d\n",m*n/a);	
}
