#include<stdio.h>
void delete(int a[],int len,int pos);
void main()
{
	int a[10]={10,12,14,16,18};
	delete(a,10,2);
}
void delete(int a[],int len,int pos)
{
	int i; 
	for(i=pos;i<len-2;i++)
		a[i]=a[i+1];
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
}
