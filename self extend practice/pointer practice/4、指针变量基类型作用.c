//ָ��������������� 
#include<stdio.h>
void main(){
	int i = 512,j;
	int *pi = &i;//����pi���׵�ַ�Ϸ����ĸ��ֽ� 
	char *pc = &i;//����pc���׵�ַ�Ϸ���һ���ֽ� 	
	int b=9;
	printf("%d %d\n",sizeof(pi),sizeof(pc));//���ۻ�����Ϊʲô��ָ������������ڴ��о�ռ�ĸ��ֽ�
	                                        //ָ��Ļ����Ϳ�����ָ��ı��������Ͳ�һ��	
	printf("*pi %d\n",*pi);    // 256  257  280  512
	for(j=0;j<6;j++)
	printf("*pc %d\n",*(pc+j));// 0		1	24 	  0
}
