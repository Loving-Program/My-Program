/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
    int account,pwd,i;
    printf("请插卡：\n");
    scanf("%d",&account);
    if(account==111)
    {
    	printf("请输入您的密码后按确认键:\n");
    	for(i=1;i<=3;i++)
    	{
			scanf("%d",&pwd);
    		if(pwd==666)
    		{	
				void service();
    			service();
    		}
    		else
	    		if(i!=3)
	    			printf("您的密码输入错误,请重新输入，您还有%d次机会。\n",3-i);
	    		else
	    			printf("您已经错误三次，吞卡，联系发卡行。");
    	}	
    }
    else
    	printf("拿错卡片。退卡。");   
}
void service()
{
	void deposit();
	void withdraw();
	void sum();
	int x;
	printf("1.存款\n2.取款\n3.查询余额\n");
	scanf("%d",&x);
	if(x==1)
		deposit();
	if(x==2)
		withdraw();
	if(x==3)
		sum();
		
}
void deposit()
{
	int m1,a;
	printf("请输入您的存款金额:\n");
	scanf("%d",&m1);
	printf("请放入您的钞票，本机只接收100元纸币:\n");
	printf("您放入钞票明细如下:\n请选择是否继续放钞:1、继续放钞\t2、结束放钞\n");
	scanf("%d",&a);
	if(a==1)
		printf("请放入您的钞票，本机只接收100元纸币:\n");
	else
		printf("请确认您的存款信息：\n");
		printf("存款账号：\n");
		printf("存款金额：\n");
		printf("手续费：\n");
		printf("实际存入金额：\n"); 
}
void withdraw()
{
	int m2;
	printf("请输入您的取款金额:\n单笔最大取款金额为5,000.00元\n");
	scanf("%d",&m2);


}
void sum()
{
	printf("您的账户余额为：\n");
	printf("可用余额为：\n");
	
 } 
