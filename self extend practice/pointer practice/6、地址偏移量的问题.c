//��ַƫ���������� 
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
	// b[i] ��b�����б��Ϊi��Ԫ�� 
	// [] ��һ������� 
	// address[ offset ] <==> *(address+offset) 
	// ��addressΪ������ַ���ڻ�����ַ�Ļ�����ƫ��offset����Ԫ��
	//  ����ƫ��֮����ڴ� 
	// b[0]	
}
