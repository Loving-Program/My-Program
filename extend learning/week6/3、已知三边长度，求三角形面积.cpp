//已知三边长度，求三角形面积
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
	printf("三角形的面积area=%f",area);
}
/*
参考《C程序设计》page59
*/