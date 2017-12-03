//输入数量不确定的的整数，统计[0,9]范围内每种数字出现的次数 
#include <stdio.h>
int main()
{
//  const int number=10;    定义数组长度为常变量，将程序中10都换成number，便于修改	
	int num,i,count[10]={0};
	printf("please input some integers:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		if(num>=0&&num<=9)
			count[num]++;
		scanf("%d",&num);
	}
	for(i=0;i<10;i++)
		printf("%d:%d\n",i,count[i]);
}

