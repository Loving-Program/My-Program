//生成一个[1,1000]内的随机数。 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{ 
	int number;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	                              //NULL表示取当前的时间 
	number=rand()%1001; //产生0-1000的随机数，rand取值范围0-32767 
	printf("%d", number);
} 
