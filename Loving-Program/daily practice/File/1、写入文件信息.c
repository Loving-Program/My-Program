//д���ļ���Ϣ 
#include <stdio.h>
void main()
{
	struct student
	{
		char number[20];
		char name[10];
		int math;
	};
	//����ѧ��1����Ϣ 
	struct student student1;
	FILE *fp;
	scanf("%s%s%d",student1.number,student1.name,&student1.math);//����ѧ����Ϣ 
	printf("%s %s %d",student1.number,student1.name,student1.math);//���ѧ����Ϣ
	fp=fopen("1.txt","w");
	fprintf(fp,"%s %s %d\n",student1.number,student1.name,student1.math);//��ѧ����Ϣд���ļ� 
	fclose(fp);
	//����ѧ��2����Ϣ 
	struct student student2;
	strcpy(student2.number,"123456");//��һ�ַ�ʽ¼��ѧ����Ϣ 
	strcpy(student2.name,"lilei");
	student2.math=88;
	fp=fopen("2.txt","w");
	fprintf(fp,"%s %s %d\r",student2.number,student2.name,student2.math);
	fclose(fp);
}
