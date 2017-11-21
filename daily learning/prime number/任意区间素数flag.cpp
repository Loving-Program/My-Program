#include<stdio.h>
void main()
{
	int begin,end,i,flag;
	scanf("%d,%d",&begin,&end);
	for(begin;begin<=end;begin++)
	{	
		flag=0;
		for(i=2;i<=begin-1;i++)
		{
			if(begin%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d是素数\n",begin);
		else
			printf("%d不是素数\n",begin);
	}
}