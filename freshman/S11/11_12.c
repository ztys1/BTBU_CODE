/*
11.12 数制转换-递归函数

成绩: 10 / 折扣: 1
定义递归函数conversion，将10进制数转换为n进制数，n为2－16之间的数，函数原型为void conversion(int m,int n)，其中m为要转换的数，n为进制。

16进制中，10 用A表示，11用B表示，依次类推。

参考代码见代码阅读区
预设代码

前置代码

view plainprint?
#include<stdio.h>  
void conversion(int m,int n);//递归函数声明  
int main()  
{  
   int num;  
   int n;  
   scanf("%d%d",&num,&n);  
   conversion(num,n);//递归函数调用  
   printf("\n");  
   return 0;  
}  
*/
#include<stdio.h>  
void conversion(int m,int n);//递归函数声明  
int main()  
{  
   int num;  
   int n;  
   scanf("%d %d\n",&num,&n);  
   conversion(num,n);//递归函数调用  
   printf("\n");  
   return 0;  
}  
/*****/
void conversion(int m,int n)   //进制转换函数 
{ 
int c; 
c = m / n; 
if(c == 0) 
printf("%d", m); 
else 
{ 
system(c, n)          ;//递归 
printf("%d", m % n); 
} 

} 
