//指针、地址小实验 
#include <stdio.h>
int j,k;
int main()
{
	int    a,b;
	float  c,*y;
	char   e,f,*z;
	printf("&j-%d  &k-%d\n",&j,&k);
	printf("&a-%d  &b-%d\n",&a,&b); 
	//printf("*x-%d x-%d\n",&*x,&x);
	printf("&c-%d ",&c);
	printf("&e-%d  &f-%d\n",&e,&f);
}
/*
若printf函数输出列表中出现“&+变量名”的形式，则输出变量地址；
内存中地址由高到低；
指针被定义的类型，为其指向的变量的类型。无论指针被定义为什么类型，其在内存中均占四个字节。 

*/
