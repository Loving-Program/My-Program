//ָ�������ϰ1 
#include <stdio.h>
int main()
{
	int * pointer_1,i,j;//����ʱ*������һ��ָ����� 
	int * pointer_2=&j;
	i=3;
	j=5;
	pointer_1 =&i;	
	printf("%d,%d,%d\n",*pointer_1,pointer_1,&pointer_1);
	printf("%d,%d,%d\n",*pointer_1+1,pointer_1+1,&pointer_1+1);//��һ����������Ҫ����ı���ֵ+1��
	                                                           //�ڶ�����������һ���洢��Ԫ�����ĸ��ֽ�;
	                                                           //�������������Ӱ˸��ֽڣ����� 
	printf("%d,%d\n",*pointer_2,pointer_2);

}
/*
1����ʶ��������ɲ������ո�pointer 1 Ϊ���Ϸ���ʶ���� 
2��"* pointer_1 = i"��ʽ��Ȼ�͡�pointer_1 =&i;���ȼۣ�����һ����ʽ������򲻻ᱨ�����޷��������У�
3��ָ�����ָ�ֵ��ʽ������ʱ��ֵ����int *pointer=&i��ǰ�᣺i�Ѷ��壩 
                     �����ֵ����pointer=&i�� 
*/
