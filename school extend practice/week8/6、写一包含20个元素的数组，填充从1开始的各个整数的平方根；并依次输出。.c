//дһ����20��Ԫ�ص����飬����1��ʼ�ĸ���������ƽ�����������������
#include <stdio.h>
#include <math.h>
void main()
{
	int a,b;
	float c[20];
	for(a=1,b=0;b<=19;a++,b++)
		c[b]=sqrt(a);//���ƽ���� 
	for(b=0;b<=19;b++)
		printf("%f\n",c[b]);//���Ԫ�� 



} 
