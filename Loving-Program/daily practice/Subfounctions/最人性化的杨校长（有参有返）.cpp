//�����Ի�����У�����в��з���
#include <stdio.h>
void main()
{
    int p1,p2,p3,a;
    int max(int p1,int p2) ; //��������
    printf("������������ѡ�˵������֣�");
    scanf("%d,%d",&p1,&p2);    
    a=max(p1,p2);     //��������
    printf("ѡ�ɴ��˳�����������������ߣ������ǣ�%d",a);
    
}
int max(int p1,int p2)
{
    int  max,p3;
    printf("�����������ѡ�˵������֣�");
    scanf("%d",&p3); 
		max=p1;
    if(p2>max)
		max=p2;
    if(p3>max)
    	max=p3;    
    return max;
}