//�ж�һ�����Ƿ�Ϊ�������޲��޷���
#include "stdio.h"
void main()
{
	void aa();
	aa();
}
void aa()
{
	int i,num,flag=0;
	scanf("%d",&num);
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		flag=1;
	}
	if(flag==0)
		printf("%d������",num);
	else
		printf("%d��������",num);
}