//计算奇偶个数 
#include <stdio.h>
void main()
{
	int i,j,a[100],m=0,n=0;
	printf("input several integers between 0 and 100000:\n");//一系列正整数，整数的范围是（0,100000）。
	for(i=0;i<=99;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)//输入-1则表示输入结束。
		{
			j=i-1;//确定数组内输入数据个数 
			printf("输入结束\n");
			break;
	    }
	}
	for(i=0;i<=j;i++)//判断数据奇偶 
	{
		if(a[i]%2==0)
			m++;
		else
			n++;	 
	}
	printf("odd numbers:%d\neven numbers:%d\n",n,m);//程序输出读到的数据中的奇数和偶数的个数。 

}

