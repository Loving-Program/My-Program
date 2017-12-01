//指针理解练习3 
#include <stdio.h>
int main()
{
	int *pointer,a;
	a=100;
//注意区分以下两种赋值方式 
	pointer=&a;
	*pointer=200;//通过给指针内容赋值改变指针指向的变量值 
	printf("%d,%d",a,*pointer);


}

