#include <stdio.h>
#include <math.h>
void main()
{
	int i,num;
	scanf("%d",&num);
		for(i=2;i<=(int)(sqrt(num));i++)
		{
			if(num%i==0)
				break;
		}
		if(i==(int)(sqrt(num))+1)
			printf("%d是素数",num);
		else
			printf("%d不是素数",num);
}