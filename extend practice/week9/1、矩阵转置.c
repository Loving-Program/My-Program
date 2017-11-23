//¾ØÕó×ªÖÃ 
#include <stdio.h>
void main()
{
	int m,n,a[2][3],b[3][2];
	printf("please input six integers for array a:\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			scanf("%d",&a[m][n]); 
	printf("array a:\n");
	for(m=0;m<=1;m++)
	{
		for(n=0;n<=2;n++)
		{
			printf("%5d",a[m][n]); 
			b[n][m]=a[m][n];
		}
		printf("\n");
    }
    printf("array b:\n");
	for(m=0;m<=2;m++)
	{
		for(n=0;n<=1;n++)
			printf("%5d",b[m][n]); 
		printf("\n");
    }

}

