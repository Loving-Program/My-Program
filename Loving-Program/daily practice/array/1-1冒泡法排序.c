//√∞≈›∑®≈≈–Ú 
#include <stdio.h>
void main()
{
	int i,j,t,a[10];
	printf("please input ten integers:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]); 
	for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
		if(a[i]>a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;		
		}
	printf("sorted numbers:\n");
	for(i=0;i<=9;i++)
		printf("%d\n",a[i]);

}

