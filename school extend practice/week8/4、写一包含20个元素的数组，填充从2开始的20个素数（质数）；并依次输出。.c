//写一包含20个元素的数组，填充从2开始的20个素数（质数）；并依次输出。
#include <stdio.h>
void main()
{
	int i,j,num,flag,a[20];
	for(num=2,j=0;j<=19;num++)
	{
		flag=0;
		for(i=2;i<=num-1;i++)
		{
			if(num%i==0)
				flag=1;
		}
		if(flag==0)
		{
			a[j]=num;//填充从2开始的20个素数
			j++;
		}
	}
	for(j=0;j<=19;j++)
		printf("%d是素数\n",a[j]);//依次输出从2开始的20个素数
}
/*
注意循环体嵌套情况及变量自增位置
*/
