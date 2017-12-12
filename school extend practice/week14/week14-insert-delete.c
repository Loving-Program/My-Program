#include<stdio.h>
void insert(int a[],int len,int pos,int value);
void delete(int a[],int len,int pos);
void main()
{
	int a[10]={10,12,14,16,18};
	insert(a,10,2,100);
	printf("\n");
	delete(a,10,1);
}
void insert(int a[],int len,int pos,int value)
{
	int i; 
	for(i=len-1;i>pos-1;i--)
		a[i+1]=a[i];
	a[pos] = value;
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}	// 10 12 20 14 16 18
}
void delete(int a[],int len,int pos)
{
	int i; 
	for(i=pos;i<len-2;i++)
		a[i]=a[i+1];
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}

}
