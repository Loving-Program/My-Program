//�ж�������������������в��޷���
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
		printf("%d��������\n",begin);
	else
		printf("%d������\n",begin);	
}