/*链表 
同数组相比		优点：便于插入删除元素
				缺点：不可单个引用元素 
*/ 
#include<stdio.h>
#include<string.h>
struct node_stu{
	char name[20];
	char stuno[20];
	int math;//定义有效信息
	//C语言允许以下定义形式 
	struct node_stu * next;//定义指向下一链表的指针 
}; 

void main(){
	// create 3 nodes
	struct node_stu *temp;
	struct node_stu s1;
	// set values of 3 nodes 
	strcpy(s1.name,"lilei");//字符数组不可用等号赋值，需要调用字符串复制函数 
	strcpy(s1.stuno,"20130101");
	s1.math = 89;
	s1.next = NULL; // 
	
	struct node_stu s2 = {
		"hanmm","20130102",88,NULL
	};
	
	struct node_stu s3={
		"LinTao","20130103",79,NULL}; 
	
	/// link 3 nodes
	s1.next = &s2;//将结构体s1指针指向下一结构体首地址，实现不同结构体间连接 
	s2.next = &s3;
	
	///
	temp = &s1;
	while(temp!=NULL){
		printf("%s %s %d \n", (*temp).stuno,  (*temp).name,  (*temp).math );
		temp =  (*temp).next;
	}
}
