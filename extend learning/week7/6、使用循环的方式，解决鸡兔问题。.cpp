//ʹ��ѭ���ķ�ʽ������������⡣
#include <stdio.h>
#include <math.h>
void main()
{
	int x,y,a,b,m,n;
	printf("����������ͷ���������ŵ�������\n");
	scanf("%d%d",&a,&b);
	for(x=0;x<=a;x++)
		for(y=a-x;y>=0;y--)
		{
			if(2*x+4*y==b)
			{
				m=x;
				n=y;
			}
		}
	printf("�����м�%dֻ������%dֻ\n",m,n);	
	
}
