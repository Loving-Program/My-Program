//指针变量基类型作用 
#include<stdio.h>
void main(){
	int i = 512,j;
	int *pi = &i;//允许pi在首地址上访问四个字节 
	char *pc = &i;//允许pc在首地址上访问一个字节 	
	int b=9;
	printf("%d %d\n",sizeof(pi),sizeof(pc));//无论基类型为什么，指针变量本身在内存中均占四个字节
	                                        //指针的基类型可与其指向的变量的类型不一致	
	printf("*pi %d\n",*pi);    // 256  257  280  512
	for(j=0;j<6;j++)
	printf("*pc %d\n",*(pc+j));// 0		1	24 	  0
}
