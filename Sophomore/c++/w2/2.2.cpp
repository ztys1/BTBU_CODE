/*
2.2 计算器-结构体指针+循环

成绩: 5 / 折扣: 1
编写一个通用计算器结构体，当输入两个整数及运算符后，可以进行+- * /运算。
要求：
1）被0除时给出错误提示；
2）运算符不是和、差、积、商运算时，给出错误提示；
3）要n个计算题，n也从键盘输入；
4）使用结构体指针+循环。
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
 computer a,*p=&a;//定义结合体变量a和结构体指针p，p指向a
    测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
2↵
3+5↵
12/0↵
以文本方式显示
3+5=8↵
12/0不能被0除↵
无限制	64M	0
测试用例 2	以文本方式显示
3↵
3^2↵
2*4↵
3-6↵
以文本方式显示
3^2运算符有错↵
2*4=8↵
3-6=-3↵
无限制	64M	0
*/
#include <iostream>
using namespace std;
struct computer // 计算器结构体
{
    int op1, op2; // 两个操作数
    char ch;      // 运算符
};
int main()
{
    computer a, *p = &a; // 定义结合体变量a和结构体指针p，p指向a

    int n;
    cin >> n;
    int i;

    for (i = 0; i < n; i++)
    {
        cin >> a.op1 >> a.ch >> a.op2;
        if (a.ch == '+')
        {
            cout << a.op1 << "+" << a.op2 << "=" << a.op1 + a.op2 << endl;
        }
        else if (a.ch == '-')
        {
            cout << a.op1 << "-" << a.op2 << "=" << a.op1 - a.op2 << endl;
        }
        else if (a.ch == '*')
        {
            cout << a.op1 << "*" << a.op2 << "=" << a.op1 * a.op2 << endl;
        }
        else if (a.ch == '/' && a.op2 != 0)
        {
            cout << a.op1 << "/" << a.op2 << "=" << a.op1 / a.op2 << endl;
        }
        else if (a.ch == '/' && a.op2 == 0)
        {
            cout << a.op1 << "/" << a.op2 << "不能被0除" << endl;
        }
        else if (a.ch != '+' && a.ch != '-' && a.ch != '*' && a.ch != '/')
        {
            cout << a.op1 << a.ch << a.op2 << "运算符有错" << endl;
        }
    }
}