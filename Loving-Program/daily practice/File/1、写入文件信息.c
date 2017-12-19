//写入文件信息 
#include <stdio.h>
void main()
{
	struct student
	{
		char number[20];
		char name[10];
		int math;
	};
	//定义学生1的信息 
	struct student student1;
	FILE *fp;
	scanf("%s%s%d",student1.number,student1.name,&student1.math);//输入学生信息 
	printf("%s %s %d",student1.number,student1.name,student1.math);//输出学生信息
	fp=fopen("1.txt","w");
	fprintf(fp,"%s %s %d\n",student1.number,student1.name,student1.math);//将学生信息写入文件 
	fclose(fp);
	//定义学生2的信息 
	struct student student2;
	strcpy(student2.number,"123456");//另一种方式录入学生信息 
	strcpy(student2.name,"lilei");
	student2.math=88;
	fp=fopen("2.txt","w");
	fprintf(fp,"%s %s %d\r",student2.number,student2.name,student2.math);
	fclose(fp);
}
