//数组、地址小实验 
#include <stdio.h>
int main()
{
	int a[3];
	char b[3];
	printf("a-%d  &a-%d  &a[0]-%d\n",a,&a,&a[0]);//三种形式输出值相同，均输出数组首地址 
	printf("b-%d  &b-%d  &b[0]-%d\n",b,&b,&b[0]);
	printf("%o  %X",b,b);                        //分别以八进制、十六进制形式输出数组b的首地址 
/*	scanf("%d",a);                    //无法正常输出 
	printf("%d %d %d",a[0],a[1],a[2]);
	scanf("%d",&a);                   //无法正常输出 
	printf("%d %d %d",a[0],a[1],a[2]);				*/
	scanf("%s",b);                       //输入asdfsergfd 
	printf("%c %c %c\n",b[0],b[1],b[2]); //输出asd 
	printf("%s",b);                      //输出asdfsergfd ????
}

/* 
scanf函数地址列表多为“&+变量名”形式，表示取变量所在的地址； 
当scanf函数的参数为一个字符数组时，可不加&； 
Question：输入字符长度大于数组长度，为何未出现错误 

*/

