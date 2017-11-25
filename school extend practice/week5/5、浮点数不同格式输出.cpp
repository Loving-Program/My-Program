//浮点数不同格式输出
#include<stdio.h>
void main()
{
	double a=7.0;
	printf("%7.2f\n",a/3);
	printf("%10.7f\n",a/3);
	printf("%13.12f\n",a/5);
	printf("%50.32f\n",a/5);
	printf("%50.32f\n",a/6);
}
/*体会：m大于数长，前用空格补齐；n大于小数位数，后用零补齐；
		指定小数位数过长，也无法保证输出全部都是有效数字；
		Q:	printf("%13.12f\n",a/5);1.4000......
			printf("%50.32f\n",a/5);1.3999......000......
*/
