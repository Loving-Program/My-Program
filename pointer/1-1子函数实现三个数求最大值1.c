/*�Ӻ���ʵ�������������ֵ1
ʵ��Ϊ������ַ���β�Ϊָ�� 
*/ 
{
	int a,b,c;
	int max3(int *p1,int *p2,int *p3);
    scanf("%d%d%d",&a,&b,&c);
    max3(&a,&b,&c);
    
}
int max3(int *p1,int *p2,int *p3)
{
	int max;
	max=*p1;
    if(*p2>max)
    	max=*p2;
    if(*p3>max)
    	max=*p3;
    printf("max=%d",max);
	return 0;
	
}
