/*�ۺ���ϰ5-ָ��Ӧ��1-����֮���ֵַ�Ĵ���2
�Ӻ�������໥���� 
��С������������� 
*/ 
#include <stdio.h>
void change();//change������������д���������Ⲣ�÷ֺŸ��� 
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
	if(*a>*b)
		change(a,b);	
}
void change(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

