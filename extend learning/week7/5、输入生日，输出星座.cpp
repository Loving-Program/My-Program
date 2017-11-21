//print constellation
#include <stdio.h>
void main()
{
	float a,b,c;
	printf("请输入您的生日 月 日:\n");
	scanf("%f%f",&a,&b);
	c=a+b/100.0;
	if(c<=1.19||c>=12.22)
		printf("您为摩羯座\n");
	else if(c>=1.20&&c<=2.18)
		printf("您为水瓶座\n");
	else if(c>=1.20&&c<=2.18)
		printf("您为水瓶座\n");
	else if(c>=2.19&&c<=3.20)
		printf("您为双鱼座\n");
	else if(c>=3.21&&c<=4.20)
		printf("您为白羊座\n");
	else if(c>=4.21&&c<=5.20)
		printf("您为金牛座\n");
	else if(c>=5.21&&c<=6.21)
		printf("您为双子座\n");
	else if(c>=6.22&&c<=7.22)
		printf("您为巨蟹座\n");
	else if(c>=7.23&&c<=8.22)
		printf("您为狮子座\n");
	else if(c>=8.23&&c<=9.22)
		printf("您为处女座\n");
	else if(c>=9.23&&c<=10.23)
		printf("您为天秤座\n");
	else if(c>=10.24&&c<=11.22)
		printf("您为天蝎座\n");
	else if(c>=11.23&&c<=12.21)
		printf("您为射手座\n");
	
}
