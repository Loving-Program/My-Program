//�վ����������������һֵ
#include <stdio.h>
void main()
{
	int a,b,c,max;
	printf("����������������");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>=max)
		max=b;
	if(c>=max)
		max=c;
	printf("%dΪ���ֵ,%dΪ���ֵ+1",max,max+1);
}