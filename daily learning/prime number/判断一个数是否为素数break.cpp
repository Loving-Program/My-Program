/*
�ж�һ�����Ƿ�Ϊ����
*/
#include<stdio.h>
void main()
{
	int i,num;
	scanf("%d",&num);
	for(i=2;i<=num-1;i++)
	{	
		if(num%i==0)
			break;
	}
	if(i<num)
		printf("%d��������\n",num);
	else
		printf("%d������\n",num);
	
}