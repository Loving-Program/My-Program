//�ڿ������� 
#include <stdio.h>
int main()
{
	int m,n,p;
	for(m=1;m<=3;m++)
	{              
		for(n=3-m;n>=0;n--)
			printf(" ");
		for(p=1;p<=2*m-1;p++)
		{ 
			if(m==1||m==3||p==1||p==3) 
				printf("*"); 
			else
				printf(" ");
		} 
		printf("\n");
	}
}
//�ڿ�ԭ���ж�ʲôʱ���ӡ�Ǻţ�ʲôʱ���ӡ�ո� 

