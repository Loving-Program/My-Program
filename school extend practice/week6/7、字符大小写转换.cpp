//�ַ���Сдת��
#include <stdio.h>
void main()
{
	char i;
	printf("������һ���ַ�:");
	scanf("%c",&i);
	if(i>=65&&i<=90)
		printf("%c",i+32);
	else if(i>=97&&i<=122)
		printf("%c",i-32);
	else
		printf("�������\n");
}