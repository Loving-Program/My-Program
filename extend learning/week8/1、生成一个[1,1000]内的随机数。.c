//����һ��[1,1000]�ڵ�������� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int i,number;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	for (i=0; i<50; i++)
		number = rand() % 1001; //����0-1000�������
	printf("%d ", number);
} 
