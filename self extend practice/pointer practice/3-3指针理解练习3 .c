//ָ�������ϰ3 
#include <stdio.h>
int main()
{
	int *pointer,a;
	a=100;
//ע�������������ָ�ֵ��ʽ 
	pointer=&a;
	*pointer=200;//ͨ����ָ�����ݸ�ֵ�ı�ָ��ָ��ı���ֵ 
	printf("%d,%d",a,*pointer);


}

