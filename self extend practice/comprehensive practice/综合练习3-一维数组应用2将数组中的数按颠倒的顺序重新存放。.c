/*�ۺ���ϰ3-һά����Ӧ��2�������е������ߵ���˳�����´�š�
����ʱ��ֻ�ܽ���һ����ʱ�洢��Ԫ�������⿪�����顣 
*/ 
#include <stdio.h>
int main()
{
	void getrand(int *a);
	void invert(int *a);
	int a[8]; 
	getrand(a);
	invert(a);
}
void getrand(int *a)//����C�⺯�����������������a��ֵ 
{
	int i; 
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	                              //NULL��ʾȡ��ǰ��ʱ�� 
	for(i=0;i<8;i++)
	{
		*(a+i)=rand()%50; //����0-49���������randȡֵ��Χ0-32767 
		printf("%d\t", *(a+i));//���������Ԫ�� 
	}
	printf("\n");
}
void invert(int *a)
{
	int i,t;
	for(i=0;i<4;i++)
	{
		t=a[i];
		a[i]=a[7-i];
		a[7-i]=t;	
	}
	for(i=0;i<8;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

