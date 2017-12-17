//简单选择法对十个数排序 
#include <stdio.h>
void main()
{
	int i,j,k,t,a[10]; 
	printf("please input ten integers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<9;i++) 
	{
		k=i;
		for(j=i+1;j<=9;j++)
			if(a[j]<a[k])
				k=j;
			if(i!=k)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
    }
    printf("sorted numbers:\n");
	for(i=0;i<=9;i++)
		printf("%d\n",a[i]);
}

