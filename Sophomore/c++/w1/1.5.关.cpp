/*
1.5 三角形面积计算

成绩: 5 / 折扣: 1
从键盘输入三角形三边，输出面积。
预设代码

前置代码

view plainprint?
#include <iostream>  
#include <cmath>  
using namespace std;  
double area(double a, double b, double c);//函数声明   
int main()  
{     
    double x,y,z;  
    cin>>x>>y>>z;  
    //调用area函数（参数为用户任意输入的值）并将计算得到的结果直接输出  
    cout<<"三角形面积为:"<<area(x,y,z)<<endl;  
    return 0;             
}  
*/

#include <iostream>  
#include <cmath>  
using namespace std;  
double area(double a, double b, double c);//函数声明   
int main()  
{     
    double x,y,z;  
    cin>>x>>y>>z;  
    //调用area函数（参数为用户任意输入的值）并将计算得到的结果直接输出  
    cout<<"三角形面积为:"<<area(x,y,z)<<endl;  
    return 0;             
}  

//
double area(double a, double b, double c)//函数声明

{
double p;
p=(a+b+c) /2;
return sqrt (p* (p-a)* (p-b) * (p-c));

}