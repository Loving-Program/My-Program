//�Զ��庯������ȫ1��nά���� 
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
		b[i]=1;
		printf("%d\t",b[i]); 
	}
}
/*
1����ȫ������ȫ1��nά�������̶������Զ��庯���в������С�
2������a��b���ݵ��ǵ�ַ���ǲ�������a������Ԫ�ظ�����Ӱ��b��ά�ȡ� 
*/
