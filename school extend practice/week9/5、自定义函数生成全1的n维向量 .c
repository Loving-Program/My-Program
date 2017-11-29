//自定义函数生成全1的n维向量 
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
		b[i]=1;
		printf("%d\t",b[i]); 
	}
}
/*
1、将全部生成全1的n维向量过程都放在自定义函数中并不可行。
2、数组a到b传递的是地址而非参数，故a数组中元素个数不影响b的维度。 
*/
