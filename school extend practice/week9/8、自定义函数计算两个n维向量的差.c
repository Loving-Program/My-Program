//�Զ��庯����������nά�����Ĳ� 
#include <stdio.h>
int main()
{
	int a[10],b[10],n;
	void vectorSub(int a[],int b[],int n);
	printf("������ά�ȣ�\n");
	scanf("%d",&n);
	vectorSub(a,b,n); 
}
void vectorSub(int a[],int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=9;
		b[i]=1;
		printf("%d\t",a[i]-b[i]); 
	}
}

