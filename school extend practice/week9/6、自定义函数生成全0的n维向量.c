//�Զ��庯������ȫ0��nά���� 
#include <stdio.h>
int main()
{
	int a[10],n;
	void array();
	printf("������ά�ȣ�\n");
	scanf("%d",&n);
	array(a,n); 
}
void array(int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		b[i]=0;
		printf("%d\t",b[i]); 
	}
}
