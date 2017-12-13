/*查找字符串 
输入一个字符串，查找这个字符串中是否存在"ab"这个字符串。
如果存在，输出这个字符串的位置（从0开始），如果不存在，输出-1
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
		if(str[i]=='a'&&str[i+1]=='b')
		{
			t=i;
			break;
		}
	}
	if(t==0)
		printf("-1");
	else
		printf("%d %d",i,i+1);

}

