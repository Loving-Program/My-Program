/*�ۺ���ϰ���������鴫����ϰ 
�������ʮ��Ԫ�ص�char�����飬���±�Ϊ4��Ԫ�ؿ�ʼ��ȫ������Ϊ*������ǰ�ĸ�Ԫ�ز��� 
*/ 
#include <stdio.h>
int main()
{
	void setstar();
	void arrout();
	char a[10]={'a','b','c','d','e','f','g'};
	setstar(a);
	arrout(a);  
}
void setstar(char  *a)
{
	int i;
	for(i=4;i<10;i++)
		*(a+i)='*';//ע��*Ϊ�����ַ���������ֵʱ���õ�Ʋ������ 
}
void arrout(char  *a)
{
	int i;
	for(i=0;i<10;i++)
		printf("%c\t",*(a+i));
}
