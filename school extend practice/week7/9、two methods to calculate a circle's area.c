//two methods to calculate a circle's area
#include <stdio.h>
#include<math.h>
void main()
{
	int r=1,n;
	double pi=3.1415926535,s1,s2;
	s1=pi*r*r;//Բ����ľ�ȷ���� 
	printf("The accurate area of this circle is %.6f\n",s1);
	for(n=3;(s1-s2)>=0.0001;n++)//��⵱nΪ����ʱ�����ƽ�������Կ�����0.0001���ڡ�
		s2=0.5*n*r*r*sin(2*pi/n);//Բ�ڽ�������μ���Բ��� 
	printf("n=%d",n);



}
