#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int i,j,m,n,max,num,a[3][4];
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	printf("random array:\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			{
				num=rand()%1000; //����0-1000�������
				printf("%d\t",a[i][j]=num);//ʹ������������
			}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				m=i;
				n=j;
			}
		}
	printf("max=%d\nraw=%d\ncolumn=%d",max,m,n);
}
