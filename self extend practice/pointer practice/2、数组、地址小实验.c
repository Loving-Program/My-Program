//���顢��ַСʵ�� 
#include <stdio.h>
int main()
{
	int a[3];
	char b[3];
	printf("a-%d  &a-%d  &a[0]-%d\n",a,&a,&a[0]);//������ʽ���ֵ��ͬ������������׵�ַ 
	printf("b-%d  &b-%d  &b[0]-%d\n",b,&b,&b[0]);
	printf("%o  %X",b,b);                        //�ֱ��԰˽��ơ�ʮ��������ʽ�������b���׵�ַ 
/*	scanf("%d",a);                    //�޷�������� 
	printf("%d %d %d",a[0],a[1],a[2]);
	scanf("%d",&a);                   //�޷�������� 
	printf("%d %d %d",a[0],a[1],a[2]);				*/
	scanf("%s",b);                       //����asdfsergfd 
	printf("%c %c %c\n",b[0],b[1],b[2]); //���asd 
	printf("%s",b);                      //���asdfsergfd 
}

/* 
scanf������ַ�б��Ϊ��&+����������ʽ����ʾȡ�������ڵĵ�ַ�� 
��scanf�����Ĳ���Ϊһ���ַ�����ʱ���ɲ���&�� 
Question�������ַ����ȴ������鳤�ȣ�Ϊ��δ���ִ��� 

*/

