//从计算机内部的理解数据类型 
#include <stdio.h>
int main()
{
	unsigned char c1=255;//0~255      char 00000000-11111111 
	char c2=255;//-128~127
	int i=255;//00000000 00000000 00000000 11111111
	printf("unsigned char c1=%d\n",c1); 
	printf("char c2=%d\n",c2); 
	printf("i=%d\n",i); 
	char c = 012;
	int m= 0x12;
	printf("c=%d,i=%d\n",c,m);
	printf("c=%o,i=%x\n",c,m);
	int a,b;
	scanf("%o%x",&a,&b);
	printf("a=%d,b=%d",a,b);
}

