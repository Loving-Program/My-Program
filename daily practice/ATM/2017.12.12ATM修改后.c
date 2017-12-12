/* Note:Your choice is C IDE */
#include "stdio.h"
#include "string.h"
void main()
{
    struct card//定义类型，结构体类型
    {	
    	char account[20];
    	char  pwd[7];
   		float money;
    };
    //int a;下面是定义变量。
    struct card card1={"123456789","666666",1.23f};
    
    char account[20];
    char pwd[7];
    int i;
    
    printf("请插卡：\n");
    scanf("%s",account);
    if(strcmp(account,card1.account)==0)
    {
    	printf("请输入您的密码：\n");
    	for(i=2;i>=0;i--)
    	{
    		scanf("%s",pwd);
    		if(strcmp(pwd,card1.pwd)==0)
    			{printf("1.存款\n2.取款\n");
    			break;}
    		else if(i!=0)//密码错误，卡号正确
    			printf("密码错误，请重新输入。您还有%d次机会\n",i);
    		else
    			printf("密码错误，吞卡\n");
    	}
    }
    else
    	printf("卡号错误！退卡。\n");    
}

