/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
    int account,pwd,i;
    printf("��忨��\n");
    scanf("%d",&account);
    if(account==111)
    {
    	printf("���������������ȷ�ϼ�:\n");
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
	void deposit();
	void withdraw();
	void sum();
	int x;
	printf("1.���\n2.ȡ��\n3.��ѯ���\n");
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
	printf("���������Ĵ����:\n");
	scanf("%d",&m1);
	printf("��������ĳ�Ʊ������ֻ����100Ԫֽ��:\n");
	printf("�����볮Ʊ��ϸ����:\n��ѡ���Ƿ�����ų�:1�������ų�\t2�������ų�\n");
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
	printf("����������ȡ����:\n�������ȡ����Ϊ5,000.00Ԫ\n");
	scanf("%d",&m2);


}
void sum()
{
	printf("�����˻����Ϊ��\n");
	printf("�������Ϊ��\n");
	
 } 
