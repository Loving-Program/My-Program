//����Բ�����
#include <stdio.h>
void main()
{
	float pi=3.14159f,r,v;
	printf("������Բ��뾶��r=");
	scanf("%f",&r);
	v=4.0/3.0*pi*r*r*r;
	printf("Բ�����v=%f",v);
}
/*Q:warning C4244: '=' : conversion from 'double' to 'float', possible loss of data�޷������
	��float��Ϊdouble�����޷����С�
*/
