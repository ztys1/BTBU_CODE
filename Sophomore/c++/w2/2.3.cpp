/*
2.3 计算器-结构体变量作函数参数（值调用）

成绩: 5 / 折扣: 1
编写一个通用计算器结构体，当输入两个整数及运算符后，可以进行+- * /运算。
要求：1）被0除时给出错误提示；2）运算符不是和、差、积、商运算时，给出错误提示；3）要n个计算题，n也从键盘输入；4）要求定义并调用函数实现，函数声明形式为void run(computer b);。
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
void run(computer b);//函数声明
int main()
{
 computer a;//定义结合体变量a
 int n,i;
 cin>>n;
 for(i=1;i<=n;i++)
 {
    cin>>a.op1>>a.ch>>a.op2;
    run(a);//函数调用
 }
 return 0;
}
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
struct computer
{                 // 计算器结构体
    int op1, op2; // 两个操作数
    char ch;      // 运算符
};
void run(computer b); // 函数声明
int main()
{
    int n;
    cout << "请输入要计算的题目数量：";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        computer a; // 定义结构体变量a
        cout << "请输入第" << i << "题（格式为：操作数 运算符 操作数）：";
        cin >> a.op1 >> a.ch >> a.op2;
        run(a); // 函数调用
    }
    return 0;
}
void run(computer b)
{
    if (b.ch =='+')
    {
        cout << b.op1 << "+" << b.op2 << "=" << b.op1 + b.op2 << endl;
    }
    else if (b.ch =='-')
    {
        cout << b.op1 << "-" << b.op2 << "=" << b.op1 - b.op2 << endl;
    }
    else if (b.ch =='*')
    {
        cout << b.op1 << "*" << b.op2 << "=" << b.op1 * b.op2 << endl;
    }
    else if (b.ch =='/' && b.op2 != 0)
    { 
        cout << b.op1 << "/" << b.op2 <<"="<< b.op1 / b.op2 << endl;
    }
    else if (b.ch =='/' && b.op2 == 0)
    { // 注意被0除的情况
        cout << b.op1 << "/" << b.op2 <<"不能被0除"<< endl;
    }
    else
    { // 运算符不是加减乘除的情况
        cout <<b.op1 << b.ch << b.op2 <<"运算符有错" << endl;
    }
}