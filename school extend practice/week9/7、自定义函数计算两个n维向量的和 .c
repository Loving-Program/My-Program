//�Զ��庯����������nά�����ĺ� 
#include <stdio.h>
int main()
{
	int a[10],b[10],n;
	void vectorAdd(int a[],int b[],int n);
	printf("������ά�ȣ�\n");
	scanf("%d",&n);
	vectorAdd(a,b,n); 
}
void vectorAdd(int a[],int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=5;
		b[i]=1;
		printf("%d\t",a[i]+b[i]); 
	}
}

