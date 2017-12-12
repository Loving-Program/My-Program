#include<stdio.h>
void insert(int a[],int len,int pos,int value);
void main()
{
	int a[10]={10,12,14,16,18};
	int len=10;
	int pos=2;
	int value=20;
	insert(a,len,pos,value);
}
void insert(int a[],int len,int pos,int value)
{
	int i; 
	for(i=len-1;i>1;i--)
		a[i+1]=a[i];
	a[pos] = value;
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
}
