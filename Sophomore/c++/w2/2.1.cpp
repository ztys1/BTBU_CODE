/*
2.1 计算器-结构体变量+循环

成绩: 5 / 折扣: 1
编写一个通用计算器结构体，当输入两个整数及运算符后，可以进行+-*//*运算。*/
/*
要求：
1）被0除时给出错误提示；
2）运算符不是和、差、积、商运算时，给出错误提示；
3）要n个计算题，n也从键盘输入;
4）使用结构体变量+循环。
预设代码

前置代码

view plainprint?
#include <iostream>  
using namespace std;  
struct computer//计算器结构体  
{  
    int op1,op2;//两个操作数  
    char ch;//运算符  
};  
int main()  
{  
 computer a;//定义结构体变量  
 	测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
2↵
3+5↵
12/0↵
以文本方式显示
3+5=8↵
12/0不能被0除↵
无限制	64M	0

*/
#include <iostream.h>
void main()
{
double x,y,z;
char mark;
cout<<"请输入要计算的两个数字："<<endl;
cin>>x>>y;
cout<<"请输入运算符："<<endl;
cin>>mark;
switch(mark)
{
case '+': z=x+y;break;
case '-': z=x-y;break;
case '*': z=x*y;break;
case '/': z=x/y;break;
default: cout<<"输入的运算符错误"<<endl;cin>>mark;break;
}
cout<<x<<mark<<y<<"="<<z<<endl;
}
http://zhidao.baidu.com/question/238915299/answer/642893685