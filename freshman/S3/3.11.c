/*求 多项式：1/1 - 1/4 + 1/7 - 1/10 + 1/13 - 1/16 +  ……直到最后1项的值小于10-5（即1e-5）为止 。
提示：与题3.10不同，累加项数n不确定，累加项比误差1e-5小就循环终止。*/
#include <stdio.h>
int main()
{
	int i;
	float flag = 1.0;
	float a;
	float sum = 0;
	i = 0;
	do
	{
		a = (float)1/(3*i+1);
		sum += a*flag;
		flag = -flag;
		i++;
	}
	while(a >= 1e-5);
	printf("%.5f\n",sum);
	return 0;
} 