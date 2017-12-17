//最集权的杨校长（有参有返）
#include <stdio.h>
void main()
{
    int p1,p2,p3,a;
    int  max(int p1,int p2,int p3); //函数声明
    printf("请输入三个候选人的量化分：");
    scanf("%d,%d,%d",&p1,&p2,&p3);    
    a=max(p1,p2,p3);     //函数调用
    printf("选派此人出国，他的量化分最高，分数是：%d",a);
}
int max(int p1,int p2,int p3)
{
	int max;
		max=p1;
    if(p2>max)
		max=p2;
    if(p3>max)
    	max=p3;    
    return max;
}
