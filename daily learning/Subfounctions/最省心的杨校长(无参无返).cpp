//��ʡ�ĵ���У�����޲��޷���ֵ��
#include <stdio.h>
void main()
{
	void max();
	max();
}
void max()
{
	int p1,p2,p3,max;
    printf("������������ѡ�˵������֣�");
    scanf("%d,%d,%d",&p1,&p2,&p3);
    max=p1;
    if(p2>max)
		max=p2;
    if(p3>max)
         max=p3; 
    printf("ѡ�ɴ��˳�����������������ߣ������ǣ�%d",max);
}