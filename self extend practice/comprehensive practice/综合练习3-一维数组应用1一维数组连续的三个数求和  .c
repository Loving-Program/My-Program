/*�ۺ���ϰ������һά����Ӧ�� 
һά������������������� 
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{
	void getrand();
	void sum();
	void priarr();
	int a[9],sum3[3];
	getrand(a);
	sum(a,sum3);
	priarr(sum3);
} 
void getrand(int *a)//����C�⺯�����������������a��ֵ 
{
	int i; 
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	                              //NULL��ʾȡ��ǰ��ʱ�� 
	for(i=0;i<9;i++)
	{
		*(a+i)=rand()%50; //����0-49���������randȡֵ��Χ0-32767 
		printf("%d\t", *(a+i));//���������Ԫ�� 
	}
	printf("\n");
}
void sum(int *a,int *sum3)
{
	int i,j;
	for(i=0,j=0;i<3;i++,j=j+3)
		sum3[i]=a[j+0]+a[j+1]+a[j+2];//��˳���ÿ��������һ���Ͳ����������� 
}
void priarr(int *sum3)
{
	int i;
	for(i=0;i<3;i++)
		printf("%d\t",sum3[i]);//�����������ĺ�ֵ 
}
