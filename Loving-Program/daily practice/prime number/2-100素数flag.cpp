#include <stdio.h>
void main()
{
	int i,num,flag;
	for(num=2;num<=100;num++)
	{
		flag=0;
		for(i=2;i<=num-1;i++)
		{
			if(num%i==0)
				flag=1;
		}
		if(flag==0)
			printf("%d是素数\n",num);
		else
			printf("%d不是素数\n",num);
	}
}