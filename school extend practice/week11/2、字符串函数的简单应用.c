//�ַ��������ļ�Ӧ�� 
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[10],str3[10];
	gets(str1);
	gets(str2);
	gets(str3);
	printf("length=%d\n",strlen(str1));//�������ַ�������Ч�ַ����� 
	printf("%s\n",strupr(str2));//��ÿ���ַ���ɴ�д���
	printf("%s\n",strlwr(str3));//��ÿ���ַ����Сд���
}

