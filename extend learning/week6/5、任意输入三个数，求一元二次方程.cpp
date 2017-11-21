//任意输入三个数，求一元二次方程ax^2+bx+c=0的根
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,x1,x2,p,q;
	printf("请输入三个系数:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
		printf("方程无实根");
	if(d==0)
	{
		x1=x2=-b/(2*a);
		printf("方程的根为x1=x1=%f",x1);
	}
	if(d>0)
	{
		p=-b/(2*a);
		q=sqrt(b*b-4*a*c)/(2*a);
		x1=p+q;
		x2=p-q;
		printf("方程的根为x1=%f,x2=%f",x1,x2);
	}
}
//参考《C程序设计》page65