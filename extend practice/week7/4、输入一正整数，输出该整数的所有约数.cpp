//输入一正整数，输出该整数的所有约数
#include <stdio.h>
void main()
{
	int a,b;
	printf("请输入一正整数:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		printf("%d\n",a/b);
	}

}