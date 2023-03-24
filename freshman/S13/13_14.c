/*
所谓孪生素数指的就是间隔为 2 的相邻素数。
输入m（5<=m<=10000），输出两个数均不超过m的最大孪生素数。
*/

#include <stdio.h>
int isPrime(int num)
{
	int i;
	for (i=2;i*i<=num;i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int m;
	scanf("%d",&m);
	int i;
	for (i=m;i>=4;i--)
	{
		if (isPrime(i)&&isPrime(i-2))
		{
			printf("%d,%d\n",i-2,i);
			return 0;
		}
	}
}
