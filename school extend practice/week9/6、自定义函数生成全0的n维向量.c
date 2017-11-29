//自定义函数生成全0的n维向量 
#include <stdio.h>
int main()
{
	int a[10],n;
	void array();
	printf("请输入维度：\n");
	scanf("%d",&n);
	array(a,n); 
}
void array(int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		b[i]=0;
		printf("%d\t",b[i]); 
	}
}
