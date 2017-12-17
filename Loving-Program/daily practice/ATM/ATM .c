/* Note:Your choice is C IDE */
#include "stdio.h"
void Checkpassword();
void service();
void deposit();
void take();
void sum();
void ChangePassword();
void withdraw();
struct card
{	
   	char account[20];
   	char  pwd[7];
   	float money;
};
struct card card[3]={{"123","111",1.23f},{"456","222",30.8f},{"789","333",453.89f}};
void main()
{
    char account[20];
    char pwd[7];
    int i;
    printf("－－－欢迎使用ATM机－－－\n");
    printf("请插入您的银行卡：\n");
    scanf("%s",&account);
    Checkpassword(account);
}
void Checkpassword(char *account)
{
	int i,flag;
	char pwd[7];
	for(i=0;i<3;i++)
    {
		if(strcmp(account,card[i].account)==0)
	    {
	    	flag=i;
	    	break;
		}
    }	
	if(flag!=-1)
    {
    	printf("请输入您的密码:\n");
    	for(i=2;i>=0;i--)
    	{
			scanf("%s",pwd);
    		if(strcmp(pwd,card[flag].pwd)==0)
			{
				service();
				break;
			}
    		else if(i!=0)
	    		printf("您的密码输入错误,请重新输入，您还有%d次机会。\n",i);
	    	else
	    		printf("您已经错误三次，吞卡，请联系发卡行。");
    	}	
    }
    else
    	printf("拿错卡片。退卡。");   
}
void service()
{
	int x; 
	printf("1.存款      2.取款\n");
	printf("3.查询余额  4.修改密码\n");
	printf("5.转账      6.退出系统\n");
	printf("请选择服务类型：\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:deposit();break;
		case 2:take();break;
		case 3:sum();break;
		case 4:ChangePassword();break;
		case 6:withdraw();break;
	}		
}
void deposit()
{
	int m1,a;
	printf("请输入您的存款金额:\n");
	scanf("%d",&m1);
	printf("请放入您的钞票，本机只接收100元纸币:\n");
	printf("正在验钞，请稍后\n");
	printf("您放入钞票明细如下:\n");
	printf("请选择是否继续放钞:1、继续放钞\t2、结束放钞\n");
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
void take()
{
	int m2;
	printf("请输入您的取款金额（整百）:\n");
	printf("单笔最大取款金额为5,000元\n");
	scanf("%d",&m2);
	while (m2!=0||m2==0)
	{
        printf("取款金额有误，请输入整百！\n");
        printf("请重新输入您的取款金额（整百）:\n");
        scanf("%d",&m2);
//判断余额是否充足 
	}

}
void sum()
{
	printf("您的账户余额为：\n");
	printf("可用余额为：\n");
 } 
void ChangePassword()
{
	int i; 
	char pwd[7],newpwd1[7],newpwd2[7];
	printf("请输入银行卡原密码：\n");
	for(i=2;i>=0;i--)
   	{
		scanf("%s",pwd);
    	if(strcmp(pwd,card[i].pwd)==0)
	    	break;
    	else if(i!=0)
	    	printf("您的密码输入错误,请重新输入，您还有%d次机会。\n",i);
	   	else
	    	printf("您已经错误三次，吞卡，联系发卡行。\n");
   	}	
   	printf("请输入新密码：");
	scanf("%s",newpwd1);
	printf("请再次输入新密码：");
	scanf("%s",newpwd2);
	while(strcmp(newpwd1,newpwd2)!=0)
	{
		printf("两次密码输入不一致，请重新输入\n");
		printf("请输入新密码：");
		scanf("%s",newpwd1);
		printf("请再次输入新密码：");
		scanf("%s",newpwd2);
	}
	printf("密码修改成功，请重新登录!\n");
	//Checkpassword();
}
void withdraw()
{
	printf("----感谢您的使用----\n");
}
