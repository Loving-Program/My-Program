/* Note:Your choice is C IDE */
#include "stdio.h"
void Checkpassword();
void service();
void deposit();
void withdraw();
void sum();
void ChangePassword();
void main()
{
    struct card
    {	
    	char account[20];
    	char  pwd[7];
   		float money;
    }card1={"123456789","666666",1.23f};
    char account[20];
    char pwd[7];
    int i;
    printf("��������ӭʹ��ATM��������\n");
    printf("������������п���\n");
    scanf("%s",&account);
    Checkpassword(account);
}
void Checkpassword(char account[])
{
	int pwd,i;
	if(strcmp(account,card1.account)==0)
    {
    	printf("���������������ȷ�ϼ�:\n");
    	for(i=3;i>=0;i--)
    	{
			scanf("%d",&pwd);
    		if(strcmp(pwd,card1.pwd)==0)
			{
				service();
				break;
			}
    		else if(i!=0)
	    		printf("���������������,���������룬������%d�λ��ᡣ\n",i);
	    	else
	    		printf("���Ѿ��������Σ��̿�������ϵ�����С�");
    	}	
    }
    else
    	printf("�ô�Ƭ���˿���");   
}
void service()
{
	int x; 
	printf("1.���      2.ȡ��\n");
	printf("3.��ѯ���  4.�޸�����\n");
	printf("5.ת��      6.�˳�ϵͳ\n");
	printf("��ѡ��������ͣ�\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:deposit();break;
		case 2:withdraw();break;
		case 3:sum();break;
		case 4:ChangePassword();break;
	}		
}
void deposit()
{
	int m1,a;
	printf("���������Ĵ����:\n");
	scanf("%d",&m1);
	printf("��������ĳ�Ʊ������ֻ����100Ԫֽ��:\n");
	printf("�����鳮�����Ժ�\n");
	printf("�����볮Ʊ��ϸ����:\n");
	printf("��ѡ���Ƿ�����ų�:1�������ų�\t2�������ų�\n");
	scanf("%d",&a);
	if(a==1)
		printf("��������ĳ�Ʊ������ֻ����100Ԫֽ��:\n");
	else
		printf("��ȷ�����Ĵ����Ϣ��\n");
		printf("����˺ţ�\n");
		printf("����\n");
		printf("�����ѣ�\n");
		printf("ʵ�ʴ����\n"); 
}
void withdraw()
{
	int m2;
	printf("����������ȡ������٣�:\n");
	printf("�������ȡ����Ϊ5,000Ԫ\n");
	scanf("%d",&m2);
	while (m2!=0||m2==0)
	{
        printf("ȡ�����������������٣�\n");
        printf("��������������ȡ������٣�:\n");
        scanf("%d",&m2);
//�ж�����Ƿ���� 
	}

}
void sum()
{
	printf("�����˻����Ϊ��\n");
	printf("�������Ϊ��\n");
 } 
void ChangePassword()
{
	int pwd=666666,password,i; 
	int newpwd1,newpwd2;
	printf("���������п�ԭ���룺\n");
	for(i=2;i>=0;i--)
   	{
		scanf("%d",&pwd);
    	if(strcmp(pwd,card1.pwd)==0)
	    	break;
    	else if(i!=0)
	    	printf("���������������,���������룬������%d�λ��ᡣ\n",i);
	   	else
	    	printf("���Ѿ��������Σ��̿�����ϵ�����С�\n");
   	}	
   	printf("�����������룺");
	scanf("%d",&newpwd1);
	printf("���ٴ����������룺");
	scanf("%d",&newpwd2);
	while(newpwd1!=newpwd2)
	{
		printf("�����������벻һ�£�����������\n");
		printf("�����������룺");
		scanf("%d",&newpwd1);
		printf("���ٴ����������룺");
		scanf("%d",&newpwd2);
	}
	printf("�����޸ĳɹ��������µ�¼!\n");
	Checkpassword();
	
}
