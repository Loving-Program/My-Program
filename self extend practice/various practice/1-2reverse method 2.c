//reverse method 2
#include <stdio.h>
int main()
{
    int x,digit,rev=0;
    printf("please input a positive three-figure number:\n");
    scanf("%d", &x);
    while (x>0) 
	{
        digit=x%10;
        //printf("%d", digit);��ͨ������м��������ٳ����չ��� 
        rev= rev*10 + digit;
        // printf("x=%d,digit=%d,rev=%d\n", x, digit, rev);
        x/=10;//��ĩλ����� 
    }
	printf("inverted order:\n%d",rev);
}
