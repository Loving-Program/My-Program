/*查找字符
输入一个字符串，查找此字符串中是否存在'a'字符.
如果存在，在输出这个字符的位置（从0开始），如果不存在，输出-1 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	int i,t=0,length;
	char str[30];
	printf("please input some characters:\n");
	gets(str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]=='a')
		{
			t=i;
			break;
		}
	}
	if(t==0)
		printf("-1");
	else
		printf("%d",i);

}

