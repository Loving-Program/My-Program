//已知两边一角，求三角形面积
#include<stdio.h>
#include<math.h>
void main()
{
	float pi=3.14159f,a,b,s;
	a=2.5;
	b=3.72;
	s=0.5*a*b*sin(37*pi/180);//s=1/2absinc 
	printf("三角形面积为,s=%f",s);
}
/*注意：调用数学函数库中三角函数时，格式一般为:x以弧度为单位时sin(x)、arcsin(x);
												x以度为单位时sin(x*3.14159/180)、arcsin(x)*3.14159/180。

*/
