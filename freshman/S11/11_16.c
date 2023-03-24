/*
11.16 输出最大数的位置-函数

成绩: 10 / 折扣: 0.8
从键盘上输入n个数,n也从键盘输入，输出最大值的位置。
要求通过函数调用实现。该函数声明为int max(int a[],int n);其中n为数组中数的个数。
提示：此题是6.4题函数版
预设代码

前置代码

view plainprint?
#include <stdio.h>  
int max(int a[],int n)  
{  
    int i,k=0;  
    for(i=1;i<n;i++)  
        if(a[k]<a[i])  
            k=i;  
    return k;//返回最大值的下标  
}  
*/