/*�ۺ���ϰ��һ����������ʵ��1-��ϰ 
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
int arrin(int b[])
{
	int i=0,x;
	printf("please input some integers:\n"); 
	do
	{
		scanf("%d",&b[i]);
		i++;
	}
	while(b[i-1]>=0);//�ж�������Ԫ���Ƿ�Ϊ���� 
	return i;//���������ݸ������������� 
}
int arrout(int c[],int i)
{
	int j;
	for(j=0;j<i;j++)
		printf("%d\n",c[j]);
	return 0;
}

