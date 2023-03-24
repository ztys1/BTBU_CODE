/*
10.11 第n个素数

成绩: 10 / 折扣: 0.8
编程找出的第n个素数是多少？并输出该素数，n从键盘输入。
判断素数时，要求使用函数isprime。此题是5.17题的函数版
预设代码

前置代码

view plainprint?
#include <stdio.h>  
int isprime(int m)//函数定义  
{  
   int i;  
   for(i=2;i<m;i++)  
       if(m%i==0)break;   
   if(i==m)  
       return 1;  
   else  
       return 0;  
}  
*/
#include <stdio.h>  
int isprime(int m)//函数定义  
{  
   int i;  
   for(i=2;i<m;i++)  
       if(m%i==0)break;   
   if(i==m)  
       return 1;  
   else  
       return 0;  
}  

/*********/


int main()
{
    int num;//第几个素数
    int count = 0;//存放个数
    scanf("%d",&num);
    int m=2;
    while(m<300)//设置比较大的终止条件
    {
        if(isprime(m)==1)
            count++;
        if(count==num)
        {
            printf("%d\n",m);
            break;
        }
        m++;
    }
}