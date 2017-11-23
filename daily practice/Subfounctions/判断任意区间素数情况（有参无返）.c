//判断任意区间素数情况（有参无返）
#include "stdio.h"
void main()
{
    void aa();
    int begin,end;
    scanf("%d%d",&begin,&end);
    for(begin;begin<=end;begin++)
    	aa(begin);
}
void aa(begin)
{
	int i;
	for(i=2;i<=begin-1;i++)
	{
		if(begin%i==0)
		break;
	}
	if(i<begin)
		printf("%d不是素数\n",begin);
	else
		printf("%d是素数\n",begin);	
}