//计算圆球体积
#include <stdio.h>
void main()
{
	float pi=3.14159f,r,v;
	printf("请输入圆球半径，r=");
	scanf("%f",&r);
	v=4.0/3.0*pi*r*r*r;
	printf("圆球体积v=%f",v);
}
/*Q:warning C4244: '=' : conversion from 'double' to 'float', possible loss of data无法解决；
	将float改为double程序无法运行。
*/
