//������������������һԪ���η���ax^2+bx+c=0�ĸ�
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,x1,x2,p,q;
	printf("����������ϵ��:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
		printf("������ʵ��");
	if(d==0)
	{
		x1=x2=-b/(2*a);
		printf("���̵ĸ�Ϊx1=x1=%f",x1);
	}
	if(d>0)
	{
		p=-b/(2*a);
		q=sqrt(b*b-4*a*c)/(2*a);
		x1=p+q;
		x2=p-q;
		printf("���̵ĸ�Ϊx1=%f,x2=%f",x1,x2);
	}
}
//�ο���C������ơ�page65