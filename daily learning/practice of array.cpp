#include <stdio.h>
void main()
{
	int sum=0,i,a[5];
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d\naverage=%.2f\n",sum,sum*1.0f/5);

}