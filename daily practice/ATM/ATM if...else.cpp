#include<stdio.h>
int main()
{
	int sele;
	printf("1.存款\n2.取款\n3.查询余额\n");
	scanf("%d",&sele);
		if(sele==1)
	
			printf("请输入您的取款金额");
	
	
		else if(sele==2)
			printf("请放入您的钞票");
		else if(sele==3)
			printf("您的账户余额为");
		else 
			printf("您的操纵做无法执行");
	
}
