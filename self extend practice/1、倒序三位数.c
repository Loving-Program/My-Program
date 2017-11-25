//ÄæĞòÈıÎ»Êı 
#include <stdio.h>
int main()
{
	int x,a,b,c,i;
	printf("please input a positive three-figure number:\n"); 
	scanf("%d",&x);
	a=x%10;
	b=x/100;
	c=x/10%10;
	i=a*100+c*10+b;
	printf("inverted order:\n%d",i);
	
}

