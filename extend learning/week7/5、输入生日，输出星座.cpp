//print constellation
#include <stdio.h>
void main()
{
	float a,b,c;
	printf("�������������� �� ��:\n");
	scanf("%f%f",&a,&b);
	c=a+b/100.0;
	if(c<=1.19||c>=12.22)
		printf("��ΪĦ����\n");
	else if(c>=1.20&&c<=2.18)
		printf("��Ϊˮƿ��\n");
	else if(c>=1.20&&c<=2.18)
		printf("��Ϊˮƿ��\n");
	else if(c>=2.19&&c<=3.20)
		printf("��Ϊ˫����\n");
	else if(c>=3.21&&c<=4.20)
		printf("��Ϊ������\n");
	else if(c>=4.21&&c<=5.20)
		printf("��Ϊ��ţ��\n");
	else if(c>=5.21&&c<=6.21)
		printf("��Ϊ˫����\n");
	else if(c>=6.22&&c<=7.22)
		printf("��Ϊ��з��\n");
	else if(c>=7.23&&c<=8.22)
		printf("��Ϊʨ����\n");
	else if(c>=8.23&&c<=9.22)
		printf("��Ϊ��Ů��\n");
	else if(c>=9.23&&c<=10.23)
		printf("��Ϊ�����\n");
	else if(c>=10.24&&c<=11.22)
		printf("��Ϊ��Ы��\n");
	else if(c>=11.23&&c<=12.21)
		printf("��Ϊ������\n");
	
}
