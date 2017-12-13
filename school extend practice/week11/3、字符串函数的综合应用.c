//字符串函数的综合应用 
#include <stdio.h>
#include <string.h>
void rev();
void change(); 
int main()
{
	char str1[30],str2[30];
	printf("please input some characters:\n");
	gets(str1);
	strcpy(str2,str1);
	rev(str1);//倒序输出每个字符 
	printf("reverse:%s\n",str1);
	change(str2);//将每个字符变反（大写变小写、小写变大写），并输出 
	printf("change:%s\n",str2); 
}
void rev(char *str1)
{
	int length,i,t;
	length=strlen(str1);
	if(length%2)
	{
		for(i=0;i<((length-1)/2);i++)
		{
			t=str1[i];
			str1[i]=str1[length-1-i];
			str1[length-1-i]=t;
		}
	}
	else
	{
		for(i=0;i<(length/2);i++)
		{
			t=str1[i];
			str1[i]=str1[length-1-i];
			str1[length-1-i]=t;
		}	
	}
}
void change(char *str2)
{
	int length,i,t;
	length=strlen(str2);
	for(i=0;i<length;i++)
		if(str2[i]>=65&&str2[i]<=90)
			strlwr(str2[i]);

} 




