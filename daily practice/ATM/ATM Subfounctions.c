/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
    int account,pwd,i;
    printf("请插卡：\n");
    scanf("%d",&account);
    if(account==111)
    {
    	printf("请输入您的密码：\n");
    	for(i=1;i<=3;i++)
    	{
			scanf("%d",&pwd);
    		if(pwd==666)
    		{	
				void aa();
    			aa();
    		}
    		else
	    		if(i!=3)
	    			printf("您的密码输入错误,请重新输入，您还有%d次机会。\n",3-i);
	    		else
	    			printf("您已经错误三次，吞卡，联系发卡行。");

    		
    	}
    	
    }
    else
    	printf("拿错卡片了吧。退卡。");   
}
void aa()
{
	void ab();
	void ac();
	void ad();
	int x;
	printf("1.存款\n2.取款\n3.查询余额\n");
	scanf("%d",&x);
	if(x==1)
		ab();

}
void ab()
{
	int m1;
	printf("请输入您的存款金额\n");
	scanf("%d",&m1);
}