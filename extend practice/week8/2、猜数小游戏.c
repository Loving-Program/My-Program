//猜数小游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //用到了time函数 
int main()
{ 
	int number,a;
	srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
	number=rand()%101; //产生0-100的随机数
	printf("please input one integer\n");
	scanf("%d",&a);
	for(;a!=number;)
	{
		if(a>number)
		{
			printf("a little bigger,again\n");
			scanf("%d",&a);
		}
		else
		{
			printf("a little smaller,again\n");
			scanf("%d",&a);
		}
	}
	if(a==number)
		printf("you are right\n");
} 
