//print multiplication table
#include <stdio.h>
void main()
{
	int a,b;
	for(a=1;a<=10;a++)
	{
		{
		for(b=1;b<=a;b++)
			printf("%d*%d=%d\t",a,b,a*b);
		}
			printf("\n");
	}
}
/*
通过改变printf在循环体中的位置控制换行
*/