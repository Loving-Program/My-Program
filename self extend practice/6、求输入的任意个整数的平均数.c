//求输入的任意个整数的平均数 
#include <stdio.h>
int main()
{
    int sum = 0,count = 0,number;
 	scanf("%d", &number);
    while ( number != -1 )//-1表示输入结束 
	{
        sum+=number;//求输入整数的和 
        count++;//计算整数个数 
        scanf("%d", &number);
    }
    printf("The average is %f\n", 1.0f*sum/count);
}
