/*�ۺ���ϰ3-һά����Ӧ��2ѧϰ����Ԫ����Ϊ�������Ļ�������
�����������ɸ�0-9���������ͳ��ÿ����������  
*/
#include <stdio.h>
int main()
{
	void getrand();
	int stat(),i; 
	int a[50],c[10]={0};
	getrand(a);
	stat(a,c);
	for(i=0;i<10;i++)
	printf("%d:%d\n",i,c[i]);

}
void getrand(int *a)//����C�⺯�����������������a��ֵ 
{
	int i;
	srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
	                              //NULL��ʾȡ��ǰ��ʱ�� 
	for(i=0;i<50;i++)
	{
		*(a+i)=rand()%10; //����0-9�������
//		printf(((i+1)%5==0)?"%d\n":"%d\t",*(a+i));//����iֵ��ͬ�ж��Ƿ��� 
		printf("%d\t",*(a+i));//������ʽ�ȼ� 
			if((i+1)%5==0) 
				printf("\n");
	}
	printf("\n");
}
int stat(int *a,int *c)
{
	int i;
	for(i=0;i<50;i++)
		c[a[i]]++;
	return c;
}

