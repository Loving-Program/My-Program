//շת����������Լ�� 
#include <stdio.h>
void main()
{
	int a,b,m,n;
	printf("please input two integers��\n");
	scanf("%d%d",&a,&b);
	do
	{
		m=a%b;//����a����b������
		a=b;//��a����b 
		b=m;//��b�������� 
	}
	while(b!=0);//b����0ʱ�����������aΪ���Լ�� 
	printf("The largest common divisor:%d\n",a);//������Լ�� 

}
