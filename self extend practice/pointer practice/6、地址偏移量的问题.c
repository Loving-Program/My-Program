//地址偏移量的问题 
#include<stdio.h> 
void main(){
	int c = 888;
	int a = 666;
	int b[2]={1,2}; // b[0], b[1]
	int i;
	int d=999;
	printf("b : %d  &b:%d \n",b,&b);
	for(i=0;i<4;i++){
		printf("%d ", b[i]); 
		// i 0~3, b[0],b[1],b[2],b[3]
	}
	printf("\n");
	for(i=2;i>-3;i--){
		printf("%d ", ((int*)6487600)[i]); 
		// i 0~3, b[0],b[1],b[2],b[3]
	}
	// b[i] 是b数组中编号为i的元素 
	// [] 是一个运算符 
	// address[ offset ] <==> *(address+offset) 
	// 以address为基础地址，在基础地址的基础上偏移offset个单元，
	//  访问偏移之后的内存 
	// b[0]	
}
