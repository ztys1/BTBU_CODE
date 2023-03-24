/*
11.9 最大公约数-递归函数

成绩: 5 / 折扣: 1
求两个自然数a和b的最大公约数，a,b从键盘上输入。

要求：定义名为euclideanAlgorithm的递归函数，函数原型为 int euclideanAlgorithm(int a, int b)，功能是使用辗转相除法求最大公约数。
提示：（最大公约数的递归公式）
gy
注意：此题a mod b要转换为c语言的表达式，即a%b
关于辗转相除法的详细介绍参见：http://baike.haosou.com/doc/5939601.html
注意与11.8题区别。
预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
    int a,b;  
    scanf("%d%d",&a,&b);//键盘输入两个整数  
    printf("%d\n",euclideanAlgorithm(a,b));//调用递归函数求最大公约数     
    return 0;  
}  
*/
int euclideanAlgorithm(int a, int b)
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
    return  a;
}
/*******/
#include <stdio.h>  
int main()  
{  
    int a,b;  
    scanf("%d %d\n",&a,&b);//键盘输入两个整数  
    printf("%d\n",euclideanAlgorithm(a,b));//调用递归函数求最大公约数     
    return 0;  
}  