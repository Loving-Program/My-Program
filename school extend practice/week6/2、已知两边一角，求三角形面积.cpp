//��֪����һ�ǣ������������
#include<stdio.h>
#include<math.h>
void main()
{
	float pi=3.14159f,a,b,s;
	a=2.5;
	b=3.72;
	s=0.5*a*b*sin(37*pi/180);//s=1/2absinc 
	printf("���������Ϊ,s=%f",s);
}
/*ע�⣺������ѧ�����������Ǻ���ʱ����ʽһ��Ϊ:x�Ի���Ϊ��λʱsin(x)��arcsin(x);
												x�Զ�Ϊ��λʱsin(x*3.14159/180)��arcsin(x)*3.14159/180��

*/
