//Ѱ��ˮ�ɻ���
#include<stdio.h>
void main()
{
	int begin,end,a,b,c;
	scanf("%d,%d",&begin,&end);
	for(begin;begin<=end;begin++)
	{
		a=begin/100;
		b=begin%10;
		c=begin%100/10;
		if(begin==a*a*a+b*b*b+c*c*c)
			printf("%d��ˮ�ɻ���\n",begin);
	
	}
}