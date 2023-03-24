/*
11.19 插入数-函数

成绩: 10 / 折扣: 0.8
已知一个排好序的数组a[ ]={1,2,3,6,8,9,12,23,33}，从键盘上输入一个数n，若数组中已经存在n，则输出不能插入，否则将n 插入到数组a中，要求插入n后的a数组元素依然有序，输出新序列。要求通过函数调用实现。该函数声明为void insert(int a[],int num,int n);其中num为数组中数的个数,n为要插入的数。
预设代码

前置代码

view plainprint?
#include<stdio.h>  
void insert(int a[],int num,int n);//函数声明   
int main()     
{  
    int n,a[10]={1,2,3,6,8,9,12,23,33};//因为插入，所以数组至少要定义10     
    scanf("%d",&n);  
    insert(a,9,n);//函数调用   
    return 0;  
}  
*/