/*�����ַ�
����һ���ַ��������Ҵ��ַ������Ƿ����'a'�ַ�.
������ڣ����������ַ���λ�ã���0��ʼ������������ڣ����-1 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	int i,t=0,length;
	char str[30];
	printf("please input some characters:\n");
	gets(str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]=='a')
		{
			t=i;
			break;
		}
	}
	if(t==0)
		printf("-1");
	else
		printf("%d",i);

}

