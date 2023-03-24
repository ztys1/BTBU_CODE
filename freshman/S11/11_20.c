/*
11.20 升序排序-函数

成绩: 5 / 折扣: 0.8
从键盘输入n 个整数(n也从键盘输入，n不超过50)并保存到数组 ，然后将这些整数进行升序排序，输出排序后的数列。
要求通过函数调用实现。该函数声明为void sort(int a[],int n);其中n为数组中数的个数。
预设代码

后置代码

view plainprint?
#include<stdio.h>   
int main()  
{  
    int i,list[50],n;  
    scanf("%d",&n);//输入实际个数  
    for(i=0;i<n;i++)//输入数组元素  
       scanf("%d",&list[i]);  
    sort(list,n);//函数调用实现对数组元素升序排序   
    for(i=0;i<n; i++)//输出排好序的数组元素  
        if(i==n-1)//最后一个元素  
         printf("%d\n",list[i]);  
        else  
         printf("%d ",list[i]);    
    return 0;  
}  
*/