//��֪���߳��ȣ������������
#include<stdio.h>
#include<math.h>
void main()
{
	double a,b,c,s,area;
	a=3;
	b=5;
	c=7;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε����area=%f",area);
}
/*
�ο���C������ơ�page59
*/