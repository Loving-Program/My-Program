/*�ۺ���ϰ��һ����������ʵ��2-�����Ż��ܽ� 
ͨ��һ���������������ж���������������ɴ��ڻ����0������,
�ø�����Ϊ���������־��������һ�������������������
*/ 
#include <stdio.h>
int main()
{
	int arrin();
	int arrout();
	int a[10],n;
	n=arrin(a);//n�õ��������ݸ��� 
	arrout(a,n);
}
int arrin(int *a)
{
	int i=0;
	printf("please input some integers:\n"); 
	do
	{
		scanf("%d",a+i);
		i++;
	}
	while(a[i-1]>=0);
	return i;
}
int arrout(int c[],int i)//c[]Ҳ�ɻ�Ϊ*c����c[������ڵ���ʮ������] 
{
	int j;
	for(j=0;j<i;j++)
		printf("%d\n",c[j]);//���������Ԫ�� 
	return 0;
}
/*
1����������ʵ��ʱ���βο�������������ʽ��
arrin(int *a);
arrin(int a[]);
arrin(int a[M]); 
ʵ���ϲ������ݹ��̴��ݵ��������׵�ַ 
2��������Ϊ��������ʱ����������һ�������������С 
*/ 

