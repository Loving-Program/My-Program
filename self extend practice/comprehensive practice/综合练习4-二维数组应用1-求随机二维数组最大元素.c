/*�ۺ���ϰ���ģ���ά����Ӧ�� 
�������ά�������Ԫ�� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{
	int getrand();
	int max();
	int a[6][6],b;
	getrand(a);
	printf("max=%d",max(a));
} 
int getrand(int a[][6])//����C�⺯�����������������a��ֵ 
{
	int i,j; 
	int number;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			a[i][j]=rand()%1000; //����0-999���������randȡֵ��Χ0-32767 
				printf("%d\t", *(*(a+i)+j));//��ӡ�����ά���� 
		}
		printf("\n");
	}
	return 0;
}
int max(int a[][6])//ע���ά�����ٽ��д���ʱ*a���Ϸ���a[][]Ҳ���Ϸ� 
{
	int max1,i,j;
	max1=a[0][0];
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)//�Ƚϴ�С 
		{
			if(*(a[i]+j)>max1)
				max1=*(a[i]+j);
		}
	return max1;
}
/*IMPORTANT:
1����ά������в�������ʱ�β���ʽ��
2����ά����Ԫ�ز�ͬ��ʾ��������ȷ����Ӧ�á� 
*/ 
