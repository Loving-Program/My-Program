//print stars
#include <stdio.h>
void main()
{
	void a();
	int x,y;
	printf("input line number=");
	scanf("%d",&y);
	for(x=1;x<=y;x++)
		a();
}
void a()
{
	printf("*\n");
}
