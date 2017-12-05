//通过强制类型转换将地址转换为指针变量 
#include <stdio.h>
int main()
{
	int a=1;
	char b='a';
	float c=2.0;
	int d[3],i;
	int *p=&a;
	*((int*)2293428)=32;
	*((int*)2293435)=65;
	*((int*)2293408)=65;
	printf("%d %d\n",a,&a);
	printf("%c %d\n",b,&b);
	printf("%f %d\n",c,&c);
	for(i=0;i<3;i++)
	printf("%d\n",&d[i]);
	printf("%d %d\n",p,*p);
}
