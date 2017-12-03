//ÍÚ¿Õ¾ØÐÎ 
#include <stdio.h>
#define ROW 8
#define LIST 5
int main()
{
	int m,n;
	for(m=1;m<=ROW;m++)
	{
		for(n=1;n<=5;n++)
		{
			if(m==1||m==ROW||n==1||n==LIST)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
		

}

