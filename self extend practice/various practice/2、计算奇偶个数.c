//������ż���� 
#include <stdio.h>
void main()
{
	int i,j,a[100],m=0,n=0;
	printf("input several integers between 0 and 100000:\n");//һϵ���������������ķ�Χ�ǣ�0,100000����
	for(i=0;i<=99;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)//����-1���ʾ���������
		{
			j=i-1;//ȷ���������������ݸ��� 
			printf("�������\n");
			break;
	    }
	}
	for(i=0;i<=j;i++)//�ж�������ż 
	{
		if(a[i]%2==0)
			m++;
		else
			n++;	 
	}
	printf("odd numbers:%d\neven numbers:%d\n",n,m);//������������������е�������ż���ĸ����� 

}

