//���������У�����в��޷���
#include <stdio.h>
void main()
{
    int p1,p2,p3;
    void max(int p1,int p2,int p3);//��������
    printf("������������ѡ�˵������֣�");
    scanf("%d,%d,%d",&p1,&p2,&p3);    
    max(p1,p2,p3);        //��������
}
void max(int p1,int p2,int p3)
{
    int  max;
    max=p1;
    if(p2>max)
		max=p2;
    if(p3>max)
    	max=p3;    
    printf("ѡ�ɴ��˳�����������������ߣ������ǣ�%d",max);
}
