//����С��Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int i,number,a;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for (i=0; i<50; i++)
		number = rand() % 101; //����0-100�������
	printf("please input one integer\n");
	scanf("%d",&a);
	for(;a!=number;)
	{
		if(a>number)
		{
			printf("a little bigger,again\n");
			scanf("%d",&a);
		}
		else
		{
			printf("a little smaller,again\n");
			scanf("%d",&a);
		}
	}
	if(a==number)
		printf("you are right\n");
} 