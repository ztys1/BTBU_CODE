#include<stdio.h> 
int isPrime(int m)
{
	int l;
	for (l=2;l*l<=m;l++)
	{
		if (m%l==0)
		{
			return 0;
		}
	}
	return 1;
}
int twinPrimeNum(int n)
{
	int sum=0;
	int i;
	for (i=5;i<=n;i++)
	{
		if (isPrime(i)&&isPrime(i-2))
		{
			sum++;
		} 
	}
	return sum;
}
//后置代码
#include<stdio.h>    
int main()  
{  
    int n;  
    scanf("%d",&n);  
    printf("%d\n",twinPrimeNum(n));  
    return 0;  
}  
