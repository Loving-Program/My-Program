//指针理解练习2
#include <stdio.h>
int main()
{
	int  *pointer_1,a;
	pointer_1=&a;
	printf("%d,%d\n",*pointer_1,a);//打印输出1-指针变量所指内容 
	printf("%d\n",&pointer_1);//打印输出2-指针变量所在地址 
	printf("%d,%d\n",pointer_1,&a);//打印输出3-指针变量所指内容的地址 
}
/*
1、若变量不赋初值，则打印输出1-结果均为0；
2、仅定义指针变量而不将其初始化，可直接打印其地址,而打印其地址所指向的变量地址结果为0；  
3、不将指针变量初始化，而直接打印输出其地址所指向的内容，程序不报错，但无法正常运行；

*/
