//������������������ƽ���� 
#include <stdio.h>
int main()
{
    int sum = 0,count = 0,number;
 	scanf("%d", &number);
    while ( number != -1 )//-1��ʾ������� 
	{
        sum+=number;//�����������ĺ� 
        count++;//������������ 
        scanf("%d", &number);
    }
    printf("The average is %f\n", 1.0f*sum/count);
}
