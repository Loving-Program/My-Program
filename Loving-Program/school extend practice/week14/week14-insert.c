//在数组某一位置插入一个数并使从该位置向后的数整体向后移一个单位 
#include<stdio.h>
void insert(int a[],int len,int pos,int value);
void main()
{
	int a[10]={10,12,14,16,18};//定义数组 
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
		printf("%d ",a[i]);//打印输出移动后数组 
}
