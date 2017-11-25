//计算器程序
#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	void add();//定义八种运算函数 
	void sub(); 
	void mult(); 
	void div();
	void sqrt();
	void remainder();//取余 
	void square();//平方 
	void cube();//立方 
	void a();//定义printf语句 
	printf("\n==========USAGE===========\n");
	printf("add:1\n");
	printf("sub:2\n");
	printf("mult:3\n");
	printf("div:4\n");
	printf("sqrt:5\n");
	printf("remainder:6\n");
	printf("square:7\n");
	printf("cube:8\n");
	printf("your choice:\n");
	scanf("%d",&i);
	if(i==1)//判断运算类型 
		add();
	if(i==2)
		sub();
	if(i==3)
		mult();
	if(i==4)
		div();
	if(i==5)
		sqrt();
	if(i==6)
		remainder();
	if(i==7)
		square();
	if(i==8)
		cube();
	a();//调用printf语句 

}
void add()
{
	int a,b;
	printf("plz input two integers\na:\nb:\n");
	scanf("%d%d",&a,&b);
	printf("sum=%d\n",a+b);
}
void sub()
{
	int a,b;
	printf("plz input two integers\na:\nb:\n");
	scanf("%d%d",&a,&b);
	printf("difference value=%d\n",a-b);

}
void mult()
{
	int a,b;
	printf("plz input two integers\na:\nb:\n");
	scanf("%d%d",&a,&b);
	printf("mult=%d\n",a*b);

}
void div()
{
	int a,b;
	printf("plz input two integers\na:\nb:\n");
	scanf("%d%d",&a,&b);
	printf("div=%f\n",1.0*a/b);

}
void sqrt()
{
	int a;
	printf("plz input one integer\na:");
	scanf("%d",&a);
	printf("sqrt=%.6f\n",sqrt(a));

}
void remainder()
{
	int a,b;
	printf("plz input two integers\na:\nb:\n");
	scanf("%d%d",&a,&b);
	printf("remainder=%d\n",a%b);

}
void square()
{
	int a;
	printf("plz input one integer\na:");
	scanf("%d",&a);
	printf("square=%d\n",a*a);

}
void cube()
{
	int a;
	printf("plz input one integer\na:");
	scanf("%d",&a);
	printf("cube=%d\n",a*a*a);
}
void a()
{
	printf("\n=========exit bye=========\n");
}
