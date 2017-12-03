//打印菱形 
#include <stdio.h>
int main()
{
	int m,n,p;
	for(m=1;m<=3;m++)//外层循环控制行数 
	{                //内层循环分别打印每一层内容 
		for(n=3-m;n>=0;n--)//打印空格数与行号关系 
			printf(" ");
		for(p=1;p<=2*m-1;p++)//打印星数与行号关系 
			printf("*"); 
		printf("\n");
	}
	for(m=1;m<=2;m++)	
	{
		for(n=m;n>=0;n--)
			printf(" ");
		for(p=1;p<=2*(3-m)-1;p++)
			printf("*"); 
		printf("\n");
	}
}

/*
行号(m)  打印空格数  	打印星数 
1       	2          	  1
2       	1          	  3
3       	0             5

1           1             3=2* 2 -1
2           2             1=2* 1 -1


*/

