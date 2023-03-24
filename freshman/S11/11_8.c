/*
11.8 最大公约数-普通函数

成绩: 5 / 折扣: 1
求两个自然数a和b的最大公约数，a,b从键盘上输入。
此题是11.7题的普通函数版
要求：定义名为gcd的普通函数，函数原型为 int gcd(int a, int b)，功能是使用循环求最大公约数
预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()          
{    
int a,b;  
scanf("%d%d",&a,&b);  
printf("%d\n",gcd(a,b));//调用普通函数求最大公约数        
return 0;        
}  
*/
int gcd(int a, int b)
{
    int m, n, temp;//定义整型变量 
    m=a; //赋值 
    n=b; //赋值 
    while(b!=0) // 余数不为0，继续相除，直到余数为0 
    { 
    temp=a%b; 
    a=b; 
    b=temp;
    }
    return a;
}
/*****/
#include <stdio.h>  
int main()          
{    
int a,b;  
scanf("%d %d\n",&a,&b);  
printf("%d\n",gcd(a,b));//调用普通函数求最大公约数        
return 0;        
}  