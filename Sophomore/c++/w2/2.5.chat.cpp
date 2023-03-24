/*
2.5 计算器-结构体数组名作函数参数（地址调用）

成绩: 5 / 折扣: 1
编写一个通用计算器结构体，当输入两个整数及运算符后，可以进行+-* /运算。
要求：
1)被0除时给出错误提示；
2)运算符不是和、差、积、商运算时，给出错误提示；
3)需要n个计算题，n也从键盘输入;
4)要求通过函数调用，结构体数组名作为函数参数（地址调用），函数声明形式为void fun(computer b[],int n);。
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
void fun(computer b[],int n);//函数声明
int main()
{
 computer a[100];//定义结构体数组a
 int i,n;
 cin>>n;
 for(i=0;i<n;i++)
    cin>>a[i].op1>>a[i].ch>>a[i].op2;
 fun(a,n);//函数调用
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

struct computer // 计算器结构体

{

    int op1, op2; // 两个操作数

    char ch; // 运算符
};

void fun(computer b[], int n); // 函数声明

int main()

{

    computer a[100]; // 定义结构体数组a

    int i, n;

    cin >> n;

    for (i = 0; i < n; i++)

        cin >> a[i].op1 >> a[i].ch >> a[i].op2;

    fun(a, n); // 函数调用

    return 0;
}

void fun(computer b[], int n)

{

    int i; 

    for (i = 0; i < n; i++) 

    {

        if (b[i].ch == '+')

            cout << b[i].op1 << "+" << b[i].op2 << "=" << b[i].op1 + b[i].op2 << endl;

        else if (b[i].ch == '-')

            cout << b[i].op1 << "-" << b[i].op2 << "=" << b[i].op1 - b[i].op2 << endl;

        else if (b[i].ch == '*')

            cout << b[i].op1 << "*" << b[i].op2 << "=" << b[i].op1 * b[i].op2 << endl;

        else if (b[i].ch == '/') 

        {

            if (b[i].op2 == 0)

                cout << b[i].op1 << "/" << b[i].op2 << "不能被0除" << endl; 

            else

                cout << b[i].op1 << "/" << b[i].op2 << "=" << b[i].op1 / b[i].op2 << endl;
        }

        else 

            cout << b[i].op1 << b[i].ch << b[i].op2 << "运算符有错" << endl;
    }
}
