//打印杨辉三角 
#include "stdio.h"
int main()
{
    int a[10][10],i,j;
    for(i=0;i<=9;i++)
    {
    	a[i][0]=1;//第一列元素均为1 
    	a[i][i]=1;//对角线上元素均为1 
    }
    for(i=2;i<=9;i++)
    	for(j=1;j<=i-1;j++)
    		a[i][j]=a[i-1][j]+a[i-1][j-1];//每个元素等于其上方的元素与其左斜上方的元素之和 
    for(i=0;i<=9;i++)
    {
    	for(j=0;j<=i;j++)
    		printf("%d\t",a[i][j]);
    	printf("\n");//打印输出二维数组 
    }
}
