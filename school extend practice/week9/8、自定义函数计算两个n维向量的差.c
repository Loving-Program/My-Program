//自定义函数计算两个n维向量的差 
#include <stdio.h>
int main()
{
	int a[10],b[10],n;
	void vectorSub(int a[],int b[],int n);
	printf("请输入维度：\n");
	scanf("%d",&n);
	vectorSub(a,b,n); 
}
void vectorSub(int a[],int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=9;
		b[i]=1;
		printf("%d\t",a[i]-b[i]); 
	}
}

