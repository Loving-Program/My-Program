//������� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int m,n,number;
	int a[2][3],b[2][3],c[2][3]; 
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
		{
			a[m][n]=rand()%100; //����0-1000�������
			b[m][n]=rand()%100;
		} 
	printf("array a:\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			printf("%d\t",a[m][n]);//��ӡ�������a 
	printf("\n"); 
	printf("array b:\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			printf("%d\t",b[m][n]);//��ӡ�������b 
	printf("\n");
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			c[m][n]=a[m][n]+b[m][n];
	printf("array c = array a + array b:\n"); 
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			printf("%d\t",c[m][n]);//��ӡ�������c
	printf("\n");
} 


