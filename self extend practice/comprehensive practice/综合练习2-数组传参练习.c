/*综合练习（二）数组传参练习 
定义具有十个元素的char型数组，从下标为4的元素开始，全部设置为*，保持前四个元素不变 
*/ 
#include <stdio.h>
int main()
{
	void setstar();
	void arrout();
	char a[10]={'a','b','c','d','e','f','g'};
	setstar(a);
	arrout(a);  
}
void setstar(char  *a)
{
	int i;
	for(i=4;i<10;i++)
		*(a+i)='*';//注意*为单个字符变量，赋值时需用单撇号引起 
}
void arrout(char  *a)
{
	int i;
	for(i=0;i<10;i++)
		printf("%c\t",*(a+i));
}
