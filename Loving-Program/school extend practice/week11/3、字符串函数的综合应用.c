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
			str1[i]=str1[length-1-i];//依次将第一个与最后一个，第二个与倒数第二个交换位置 
			str1[length-1-i]=t;
		}	
	}
}
void change(char *str2)
{
	int len,i,t;
	len=strlen(str2);
	for(i=0;i<len;i++)
		if(str2[i]>=65&&str2[i]<=90)//判断字符状态 
//	strlwr(str2[i]);error strlwr为字符串整体变为小写函数，并不使用于单个字符元素 
			str2[i]=str2[i]-65+97;
		else
			str2[i]=str2[i]-97+65;	
} 




