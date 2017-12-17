//最省心的杨校长（无参无返回值）
#include <stdio.h>
void main()
{
	void max();
	max();
}
void max()
{
	int p1,p2,p3,max;
    printf("请输入三个候选人的量化分：");
    scanf("%d,%d,%d",&p1,&p2,&p3);
    max=p1;
    if(p2>max)
		max=p2;
    if(p3>max)
         max=p3; 
    printf("选派此人出国，他的量化分最高，分数是：%d",max);
}