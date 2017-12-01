//指针理解练习1 
#include <stdio.h>
int main()
{
	int * pointer_1,i,j;//定义时*代表定义一个指针变量 
	int * pointer_2=&j;
	i=3;
	j=5;
	pointer_1 =&i;	
	printf("%d,%d,%d\n",*pointer_1,pointer_1,&pointer_1);
	printf("%d,%d,%d\n",*pointer_1+1,pointer_1+1,&pointer_1+1);//第一个操作给将要输出的变量值+1；
	                                                           //第二个操作增加一个存储单元，即四个字节;
	                                                           //第三个操作增加八个字节？？？ 
	printf("%d,%d\n",*pointer_2,pointer_2);

}
/*
1、标识符名称组成不包含空格：pointer 1 为不合法标识符； 
2、"* pointer_1 = i"形式虽然和“pointer_1 =&i;”等价，但第一种形式编译程序不会报错，但无法正常运行；
3、指针两种赋值方式：定义时赋值——int *pointer=&i（前提：i已定义） 
                     定义后赋值——pointer=&i； 
*/
