//����������ȷ���ĵ�������ͳ��[0,9]��Χ��ÿ�����ֳ��ֵĴ��� 
#include <stdio.h>
int main()
{
//  const int number=10;    �������鳤��Ϊ����������������10������number�������޸�	
	int num,i,count[10]={0};
	printf("please input some integers:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		if(num>=0&&num<=9)
			count[num]++;
		scanf("%d",&num);
	}
	for(i=0;i<10;i++)
		printf("%d:%d\n",i,count[i]);
}

