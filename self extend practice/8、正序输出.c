//正序输出整数 
#include <stdio.h>
int main()
{
    int t,x,mask=1;
    printf("please input an integer:\n");
    scanf("%d", &x);
    t=x;
    while (t>9) {
        t/=10;
        mask*=10;
    }
	printf("positive sequence:\n"); 
    do {
        int d=x/mask;
        printf(" %d ",d);
        x%=mask;
        mask/=10;
    } while (mask>0);
    printf("\n");
}

