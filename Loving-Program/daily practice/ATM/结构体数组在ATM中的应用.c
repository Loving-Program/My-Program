#include "stdio.h"
#include "string.h"
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
    int i,flag=-1,x;
    printf("请插卡：\n");
    scanf("%s",account);
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
    	for(i=2;i>=0;i--)
		{
			printf("请输入您的密码：\n");
		    scanf("%s",pwd);
		    if(strcmp(pwd,card[flag].pwd)==0)
		    {
		    	do
				{
				printf("1.存款\n2.取款\n3.退出系统\n");
				scanf("%d",&x); 
				switch(x)
				{
					case 1:printf("cun");break;
					case 2:printf("qu");;break;
				}	
				}
				while(x!=3);
				break;
			}
		    else if(i!=0)//密码错误，卡号正确
		    	printf("密码错误，请重新输入。您还有%d次机会\n",i);
		    else
		    	printf("密码错误，吞卡\n");
		}  
	}
    else
    	printf("卡号错误！退卡。\n"); 
}

