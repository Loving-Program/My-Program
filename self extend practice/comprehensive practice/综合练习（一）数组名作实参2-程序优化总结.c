/*综合练习（一）数组名作实参2-程序优化总结 
通过一个函数给主函数中定义的数组输入若干大于或等于0的整数,
用负数作为输入结束标志；调用另一函数输出该数组中数据
*/ 
#include <stdio.h>
int main()
{
	int arrin();
	int arrout();
	int a[10],n;
	n=arrin(a);//n得到输入数据个数 
	arrout(a,n);
}
int arrin(int *a)
{
	int i=0;
	printf("please input some integers:\n"); 
	do
	{
		scanf("%d",a+i);
		i++;
	}
	while(a[i-1]>=0);
	return i;
}
int arrout(int c[],int i)//c[]也可换为*c，或c[任意大于等于十的整数] 
{
	int j;
	for(j=0;j<i;j++)
		printf("%d\n",c[j]);//输出数组中元素 
	return 0;
}
/*
1、数组名作实参时，形参可有以下三种形式：
arrin(int *a);
arrin(int a[]);
arrin(int a[M]); 
实质上参数传递过程传递的是数组首地址 
2、数组作为函数参数时，必须再用一参数传入数组大小 
*/ 

