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
    int account;
    printf("��������ӭʹ��ATM��������\n");
    printf("��忨��\n");
    scanf("%d",&account);
    Checkpassword(account);
}
void Checkpassword(int account)
{
	int pwd,i;
	if(account==111)
    {
    	printf("���������������ȷ�ϼ�:\n");
    	for(i=1;i<=3;i++)
    	{
			scanf("%d",&pwd);
    		if(pwd==666)
				service();
    		else
	    		if(i!=3)
	    			printf("���������������,���������룬������%d�λ��ᡣ\n",3-i);
	    		else
	    			printf("���Ѿ��������Σ��̿�����ϵ�����С�");
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
	int pwd=666,password,i; 
	int newpwd1,newpwd2;
	printf("���������п�ԭ���룺\n");
	for(i=1;i<=3;i++)
   	{
		scanf("%d",&pwd);
    	if(pwd==666)
	    	break;
    	else
	    	if(i!=3)
	    		printf("���������������,���������룬������%d�λ��ᡣ\n",3-i);
	   		else
	    		printf("���Ѿ��������Σ��̿�����ϵ�����С�");
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
