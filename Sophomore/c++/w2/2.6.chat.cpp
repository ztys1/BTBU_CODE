#include <iostream>

using namespace std;

struct computer // 计算器结构体
{
    int op1, op2; // 两个操作数
    char ch;      // 运算符
};

void fun(computer *pb, int n); // 函数声明

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

void fun(computer *pb, int n) 
{
    int i; // 增加变量定义
    for (i = 0; i < n; i++)
    {
        if (pb[i].ch == '+')
        {
            cout << pb[i].op1 << "+" << pb[i].op2 << "=" << pb[i].op1 + pb[i].op2 << endl;
        }
        else if (pb[i].ch == '-')
        {
            cout << pb[i].op1 << "-" << pb[i].op2 << "=" << pb[i].op1 - pb[i].op2 << endl;
        }
        else if (pb[i].ch == '*')
        {
            cout << pb[i].op1 << "*" << pb[i].op2 << "=" << pb[i].op1 * pb[i].op2 << endl;
        }
        else if (pb[i].ch == '/')
        {
            if (pb[i].op2 == 0) // 修改：被0除时给出错误提示
            {
                cout << pb[i].op1 << "/" << pb[i].op2 << "不能被0除" << endl;
            }
            else // 修改：正常运算
            {
                cout << pb[i].op1 << "/" << pb[i].op2 << "=" << pb[i].op1 / pb[i].op2 << endl;
            }
        }
        else // 修改：运算符不是和、差、积、商运算时，给出错误提示
        {
            cout << pb[i].op1 << pb[i].ch << pb[i].op2 << "运算符有错" << endl;
        }
    }
}