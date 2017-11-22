//two methods to calculate a circle's area
#include <stdio.h>
#include<math.h>
void main()
{
	int r=1,n;
	double pi=3.1415926535,s1,s2;
	s1=pi*r*r;
	printf("The accurate area of this circle is %.6f\n",s1);
	for(n=3;(s1-s2)>=0.0001;n++)
		s2=0.5*n*r*r*sin(2*pi/n);
	printf("%d",n);



}