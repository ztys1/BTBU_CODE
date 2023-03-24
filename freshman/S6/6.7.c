/*6.7 斐波拉契数列前n项输出-数组

成绩: 5 / 折扣: 0.8
斐波拉契数列：1，1，2，3，5，8，13，21...要求先将前n项的数列存到数组，然后再输出这个数列的前n项,要求每隔4个数换一行，n从键盘上输入。
提示：本题是5.4题的数组版
预设代码

前置代码

view plainprint?
#include<stdio.h>   
int main()   
{  
    int n,a[30]={1,1},i;  
    scanf("%d",&n);  
    
    https://blog.csdn.net/weixin_52278438/article/details/111937393
    */
#include<stdio.h>   
int main()   
{  
    int n,a[30]={1,1},i;  
    scanf("%d",&n); 

    
    int j=0;
	for(i=2 ; i<n ; i++)	//利用我们得到的公式进行赋值
		a[i]=a[i-1]+a[i-2];

	for(j=0 ; j<n ;j++)	//输出
		{
            printf("%d,",a[j]);
            if((j+1)%4==0) 
            {
                printf("\n");
                
            };

        }
    if((j%4)!=0)
    printf("\n");
    return 0;

}
