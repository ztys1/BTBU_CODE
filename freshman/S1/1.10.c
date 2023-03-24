/*1.10 两数求余*

成绩: 5 / 折扣: 0.8
从键盘输入2个整数，计算其余数并输出。*/

#include <stdio.h>
int main()
{
	int a,b,r;
	scanf("%d,%d\n", &a,&b);
	r=a%b;
	printf("%d\n",r);
	return 0;
}
