#include "stdio.h"
#include "string.h"
void main()
{
    struct card//�������ͣ��ṹ������
    {	
    	char account[20];
    	char  pwd[7];
   		float money;
    };
    //int a;�����Ƕ��������
    struct card card1={"123456789","666666",1.23f};
    
    char account[20];
    char pwd[7];
    int i;
    
    printf("��忨��\n");
    scanf("%s",account);
    if(strcmp(account,card1.account)==0)
    {
    	printf("�������������룺\n");
    	for(i=2;i>=0;i--)
    	{
    		scanf("%s",pwd);
    		if(strcmp(pwd,card1.pwd)==0)
    			{printf("1.���\n2.ȡ��\n");
    			break;}
    		else if(i!=0)//������󣬿�����ȷ
    			printf("����������������롣������%d�λ���\n",i);
    		else
    			printf("��������̿�\n");
    	}
    }
    else
    	printf("���Ŵ����˿���\n");    
}

