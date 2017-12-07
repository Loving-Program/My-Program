/*综合练习（一）数组名作实参1-练习 
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
int arrin(int b[])
{
	int i=0,x;
	printf("please input some integers:\n"); 
	do
	{
		scanf("%d",&b[i]);
		i++;
	}
	while(b[i-1]>=0);//判断数组内元素是否为正数 
	return i;//将输入数据个数返回主函数 
}
int arrout(int c[],int i)
{
	int j;
	for(j=0;j<i;j++)
		printf("%d\n",c[j]);
	return 0;
}

