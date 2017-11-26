//更相减损术求最大公因数；最小公倍数
#include <stdio.h>
void main()
{
	int a,b,m,n;
	printf("please input two integers：\n");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	while(a!=b)//更相减损术 
		if(a>b)
			a=a-b;
		else
			b=b-a;
	printf("The largest common divisor:%d\n",a);//输出最大公约数 
	printf("The least common multiple:%d\n",m*n/a);//输出最小公倍数	
}
