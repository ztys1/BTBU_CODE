/*
从键盘上输入n个数（n也从键盘输入），
输出其中最大数。本题要求用指针实现。
*/
#include<stdio.h>  
int main()  
{  
    int a[100],n,*p,*max;  
    scanf("%d",&n);   
    for(p=a;p<a+n;p++)//从键盘输入n个数  
        scanf("%d",p);  
//前置代码
    max = p;
    for(p=a; p<a+n; p++)
        if(*p > *max)
            max = p;
//后置代码
printf("max=%d\n",*max);  
 return 0;  
}  