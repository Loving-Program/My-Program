//寻找水仙花数
#include <stdio.h>
void main()
{
	int i,j,k,num;
	for(i=1;i<=9;i++)
		for(j=0;j<=9;j++)
			for(k=0;k<=9;k++)
			{
			num=i*100+j*10+k;
			if(num==i*i*i+j*j*j+k*k*k)
				printf("%d是水仙花数\n",num);
			}
			

}