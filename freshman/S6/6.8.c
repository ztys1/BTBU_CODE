#include<stdio.h>   
int main()   
{  
    int n,a[30]={1,1},i;  
    scanf("%d",&n); 

    
	for(int i=2 ; i<n ; i++)	//利用我们得到的公式进行赋值
		a[i]=a[i-1]+a[i-2];

	

	printf("%d\n",a[n-1]);
}