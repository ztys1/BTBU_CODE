/*已知：pi，编程求圆周率 并以5位小数形式输出，误差e从键盘上输入。
提示：累加项数不确定，累加项比误差小循环终止。可以参考3.11题修改
*/
#include <stdio.h>
int main()
{
	int i;
	double flag = 1.0;
	double a=0,b=0.0;
	double sum = 0;
	i = 0;
	scanf ("%lf\n" , &b);
    do
	{
		a = (float)4/(2*i+1);
		sum += a*flag;
		flag = -flag;
		i++;
	}
	while(a >= b);
	printf("%.5lf\n",sum);
	return 0;
} 