//从计算机内部的理解数据类型
#include <stdio.h>
int main()
{
/*	printf("%d\n",12/0);
	printf("%d\n",12.0/0);
	程序无法正常运行 
*/ 
	printf("%d\n",12.0/0.0);//有的编译器输出inf（正无穷） 
	printf("%d\n",-12.0/0.0);//有的编译器输出-inf（负无穷） 
	printf("%d\n",0.0/0.0);//有的编译器输出nan（表示不存在的数字）
	printf("%d\n",12/0.0);//无法编译，整数无法表示无穷，浮点数可以 

}

