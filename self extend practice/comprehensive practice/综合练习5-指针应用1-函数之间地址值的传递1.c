/*�ۺ���ϰ5-ָ��Ӧ��1-����֮���ֵַ�Ĵ���1
��С������������� 
*/ 
#include <stdio.h>
int main()
{
	void order();
	int a,b;
	scanf("%d%d",&a,&b);
	order(&a,&b);
	printf("%d %d",a,b);
}
void order(int *a,int *b)
{
	int t;
	if(*a>*b)
	{
		t=*a;
		*a=*b;
		*b=t;
	}
	
}
