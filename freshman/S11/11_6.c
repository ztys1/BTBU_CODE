/*
编写求斐波那契数列的第n 项的递归函数，其函数声明为int fib(int n);
此题是7.8题的递归函数版
提示：（斐波拉契数列递归公式）
fib( n)=1                           n=1或n=2
fib( n) = fib(n-1)+fib(n-2)   n>2
*/

int fib(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

/*************************************/
//后置代码
#include<stdio.h>   
int main()   
{  
 int n;    
 scanf("%d",&n); //输入n  
 printf("%d\n",fib(n));//调用递归函数获取第n项  
 return 0;  
}  