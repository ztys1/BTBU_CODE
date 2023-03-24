/*
11.18 删除数-函数

成绩: 10 / 折扣: 0.8
已知数组a[]={61,4,26,8,22,35,7,89,45,1}。从键盘输入整数n，若n在数组a中，则删除n，并输出删除后的数组元素。若a数组中不存在n则输出不能删除。要求通过函数调用实现。该函数声明为void del(int a[],int num,int n);其中num为数组中数的个数,n为要删除的数。
预设代码

前置代码

view plainprint?
#include<stdio.h>  
void del(int a[],int num,int n);//函数声明   
int main()     
{  
    int n,a[]={61,4,26,8,22,35,7,89,45,1};     
    scanf("%d",&n);  
    del(a,10,n);//函数调用  
    return 0;  
}  
*/