//2*2����ʽ���� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int m,n,det,a[2][2]; 
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for(m=0;m<=1;m++)
		for(n=0;n<=2;n++)
			a[m][n]=rand()%100; //����0-1000�������
	printf("array a:\n");
	for(m=0;m<=1;m++)
	{
		for(n=0;n<=1;n++)
		{	
			printf("%d\t",a[m][n]);
			if(n==1)
				printf("\n");//��ӡ2*2���� 
		}
	}
	det=a[0][0]*a[1][1]-a[0][1]*a[1][0];//�Խ�����Ԫ����ˣ����Խ��߼�ȥ�ζԽ��� 
	printf("sum of determinant=%d",det);
}
