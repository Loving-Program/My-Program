#include<stdio.h>
void main()
{
	int sele,a;
	printf("1.存款\n2.取款\n3.查询余额\n");
	scanf("%d",&sele);
	switch(sele)
{	
	case 1:printf("请输入您的取款金额");
		
		scanf("%d",&a);
			if(a<=5000)
				printf("取款成功");
			else
				printf("取款失败");
		break;
	case 2:printf("请放入您的钞票");
		break;
	case 3:printf("您的账户余额为");
		break;
	case 4: printf("您的操纵做无法执行");
}
}