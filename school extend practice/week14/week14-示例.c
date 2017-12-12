#include<stdio.h>
void insert(int a[],int len,int pos,int value){
	// a , a[0],a[1],a[2], ~, a[len-1]
	// a[pos] = value 
	// a[pos]=>a[pos+1], a[pos+1]=>a[pos+2],
	// ..., a[len-2]=> a[len-1]
	int i;
//	for(i=len-1;i>=pos+1;i--)
//		a[i] = a[i-1];
	for(i=len-2; i>= pos; i--)
		a[i+1] = a[i];
	a[pos] = value;
}
void main(){
	int a[10]={10,12,14,16,18};
	int i;
	insert(a,10,2,100);
	insert(a,10,2,200);
	insert(a,10,0,300);
//	// a[2] = 20,  
//	// to do 
//	// 1 Õ˘∫Û∆Ω“∆
//	for(i=9;i>2;i--)
//		a[i]=a[i-1]; 
//	// 2 ≤Â»Î 
//	a[2]=20;
//	///
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	// 10 12 20 14 16 18
	
}
