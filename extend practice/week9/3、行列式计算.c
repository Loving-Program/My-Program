#include <stdio.h>
void main()
{
	int a[2][2];number;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	number=rand()%1001; //产生0-1000的随机数
	printf("%d", number);

}

