//����һ��[1,1000]�ڵ�������� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //�õ���time���� 
int main()
{ 
	int number;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	                              //NULL��ʾȡ��ǰ��ʱ�� 
	number=rand()%1001; //����0-1000���������randȡֵ��Χ0-32767 
	printf("%d", number);
} 
