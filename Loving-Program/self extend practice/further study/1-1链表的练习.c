/*���� 
ͬ�������		�ŵ㣺���ڲ���ɾ��Ԫ��
				ȱ�㣺���ɵ�������Ԫ�� 
*/ 
#include<stdio.h>
#include<string.h>
struct node_stu{
	char name[20];
	char stuno[20];
	int math;//������Ч��Ϣ
	//C�����������¶�����ʽ 
	struct node_stu * next;//����ָ����һ�����ָ�� 
}; 

void main(){
	// create 3 nodes
	struct node_stu *temp;
	struct node_stu s1;
	// set values of 3 nodes 
	strcpy(s1.name,"lilei");//�ַ����鲻���õȺŸ�ֵ����Ҫ�����ַ������ƺ��� 
	strcpy(s1.stuno,"20130101");
	s1.math = 89;
	s1.next = NULL; // 
	
	struct node_stu s2 = {
		"hanmm","20130102",88,NULL
	};
	
	struct node_stu s3={
		"LinTao","20130103",79,NULL}; 
	
	/// link 3 nodes
	s1.next = &s2;//���ṹ��s1ָ��ָ����һ�ṹ���׵�ַ��ʵ�ֲ�ͬ�ṹ������� 
	s2.next = &s3;
	
	///
	temp = &s1;
	while(temp!=NULL){
		printf("%s %s %d \n", (*temp).stuno,  (*temp).name,  (*temp).math );
		temp =  (*temp).next;
	}
}
