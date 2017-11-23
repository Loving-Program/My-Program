#include <stdio.h>
void main()
{
	int i,num,flag=0;
	scanf("%d",&num);
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
			flag=1;
	}
	if(flag==0)
		printf("%d是素数",num);
	else
		printf("%d不是素数",num);
}
