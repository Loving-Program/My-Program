/*�Ӻ���ʵ�������������ֵ2
ʵ��Ϊ���������β�Ϊָ�� 
*/  
#include "stdio.h"
void main()
{
	int a[3],i;
	int max3(int *p);
	for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    max3(a);
    
}
int max3(int *p)//���顢ָ����໥ת�� 
{
	int max,i;
	max=*p;
	for(i=0;i<3;i++)
    if(*(p+i)>max)
    	max=*(p+i);
    printf("max=%d",max);
	return 0;
	
}
