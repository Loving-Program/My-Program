/*�ۺ���ϰ4-��ά����Ӧ��2-�������ά����ÿ��Ԫ��ƽ��ֵ 
���������еĶ�ά���鸳10-40��Χ�������������ά����ÿ��Ԫ��ƽ��ֵ 
*/ 
#include <stdio.h>
int main()
{
	void getrand();
	void ave();
	int a[5][6];
	getrand(a);
	ave(a);
}
void getrand(int (*b)[6])
{
	int i,j,num;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for(i=0;i<5;i++)
		for(j=0;j<6;)
		{
			num=rand()%41; //����0-40���������randȡֵ��Χ0-32767 
			if(num>9)//ɸѡ10-40����� 
			{	
				b[i][j]=num;
				j++;//�����Ϸ�Χ������������ά����Ԫ�غ�ſ�ʵ���������� 
			}
		}
	printf("double diensional array:\n");
	for(i=0;i<5;i++)
	{
		{
			for(j=0;j<6;j++)
				printf("%d\t",b[i][j]);//��ӡ�����ά����
		}
	printf("\n");//ÿһ�н���ʵ�ֻ��в��� 
	}
}
void ave(int c[][6])
{
	int i,j,sum;
	float aver[5]={0.0};//���帡����һλ������ÿ��ƽ��ֵ 
	for(i=0;i<5;i++){
	{
		sum=0.0;//ÿ��ѭ����ʼ���¸�sum��ֵ 
		for(j=0;j<6;j++)
			sum+=c[i][j];//��ÿ��Ԫ�غ� 
	}
	aver[i]=1.0f*sum/6;//��ÿ��Ԫ��ƽ��ֵ 
	}
	printf("averages:\n"); 
	for(i=0;i<5;i++)
	printf("a[%d]=%f\t",i,aver[i]);
}

