//��������˵�����
#include <stdio.h>
int main()
{
	char name[30];
	char name1[10],name2[10],name3[10];
	printf("please input some names:\n");
	gets(name);//��������˵�����
	gets(name1);
	gets(name2);
	gets(name3);
	puts(name);//��˳���������˵�����
	puts(name3);//��������������˵�����
	puts(name2);
	puts(name1);

}

