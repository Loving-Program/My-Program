//用公式π/4=1-1/3+1/5-1/7+1/9...π近似值，直到发现某一项绝对值小于10的-6次方为止（该项不累加） 
#include <stdio.h>
#include <math.h>//程序中用到数学函数fabs，应包含头文件math.h 
void main()
{
	int sign=1;            //sign表示数值符号 
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-6)//检查当前项term的绝对值是否大于或等于10的-6次方 
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
}
/*参考书PAGE132 
C库函数中，有两个求绝对值得的函数
abs（s），求整数x的绝对值
fabs（s），求双精度x的绝对值3 

程序输出结果3.14159065
进前五位小数准确，第七位已小于10的-6，后面的项未进行累加 


*/
