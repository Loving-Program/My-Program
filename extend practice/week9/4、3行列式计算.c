//3*3����ʽ���� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int m,n,det,a[3][3]; 
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for(m=0;m<=2;m++)
		for(n=0;n<=2;n++)
			a[m][n]=rand()%100; //����0-10�������
	printf("array a:\n");
	for(m=0;m<=2;m++)
	{
		for(n=0;n<=2;n++)
		{	
			printf("%d\t",a[m][n]);
			if(n==2)
				printf("\n");
		}
	}
	det=a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[2][1]*a[1][0]-a[0][2]*a[1][1]*a[2][0]-a[0][1]*a[1][0]*a[2][2]-a[0][0]*a[2][1]*a[1][2];
	printf("sum of determinant=%d",det);
}
