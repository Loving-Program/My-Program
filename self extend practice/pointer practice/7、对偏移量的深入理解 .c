//��ƫ������������� 
#include<stdio.h>
void main(){
	int a[5]={20,323,34,6,1} ;
	int *p;
	p = a; // a   &a  &a[0]
	printf("*p = %d\n",*p); // * &a[0]
	printf("*(p+1) = %d\n", *(p+1) );
	// * ( p+1 )
	// p+1�ı�����ʵ�� ��ַ+1  ��ַƫ��1����Ԫ 
	// int b=10; b+1 === (1) ȡ��b��ֵ�� (2)��b��ֵ+1 
	printf("*(a+2) = %d\n", *(a+2) );
	/////
	p = &a[2];
	printf("*(p-1) = %d \n",*(p-1));
	printf("*(p-2) = %d \n",*(p-2));
	////  addr[offset]
	p = a;
	printf("a[2]=%d \n",a[2]) ;
	printf("p[2]=%d \n",p[2]) ;
	printf("(a+1)[2] = %d\n", (a+1)[2]);
	p = &a[2];
	printf("%d\n",*p);
	p = &(a+1)[1];
	printf("%d\n",*p);
	printf("p[-1] = %d\n", p[-1]);
	printf("(a+2)[-2] = %d\n", (a+2)[-2]);
}
