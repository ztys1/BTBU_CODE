#include <stdio.h> 
#include <math.h>

int main()
{
	double a = 1.0;
	double i = 0;
	double flag = 1;
	double sum = 0;
	double e = 0;
	scanf("%lf", &e);
	do
	{
		sum += flag/(2*i+1);
		flag *= -1.0;
		i++;
		a = 1.0/(2*i+1);
		//printf("%lf\t%lf\n",a, sum);
	}
	while((a-e)>1e-20);
	double pi = 4*sum;
	printf("%.5lf\n",pi);
	return 0;
}