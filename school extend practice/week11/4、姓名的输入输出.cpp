//输入五个人的姓名
#include <stdio.h>
int main()
{
	char name[30];
	char name1[10],name2[10],name3[10];
	printf("please input some names:\n");
	gets(name);//输入五个人的姓名
	gets(name1);
	gets(name2);
	gets(name3);
	puts(name);//按顺序输出五个人的姓名
	puts(name3);//按倒序输出三个人的姓名
	puts(name2);
	puts(name1);

}

