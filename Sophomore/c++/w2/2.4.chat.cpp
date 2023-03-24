/*
2.4 计算器-结构体指针作函数参数（地址调用）
成绩: 5 / 折扣: 1
编写一个通用计算器结构体，当输入两个整数及运算符后，可以进行+-* /运算。
要求：
1）被0除时给出错误提示；
2）运算符不是和、差、积、商运算时，给出错误提示；
3）要n个计算题，n也从键盘输入；
4）要求定义并调用函数实现，函数声明形式为void run(computer *pb);。
预设代码
前置代码
view plainprint?
#include
using namespace std;
struct computer//计算器结构体
{
int op1,op2;//两个操作数
char ch;//运算符
};
void run(computer *pb);//函数声明
int main()
{
computer a;//定义结合体变量a
int n,i;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a.op1>>a.ch>>a.op2;
run(&a);//函数调用
}
return 0;
}

    测试用例 1
    以文本方式显示
1.  2↵
2.  3+5↵
3.  12/0↵
    以文本方式显示
1.  3+5=8↵
2.  12/0不能被0除↵
    无限制
    64M
    0
    测试用例 2
    以文本方式显示
1.  3↵
2.  3^2↵
3.  2*4↵
4.  3-6↵
    以文本方式显示
1.  3^2运算符有错↵
2.  2*4=8↵
3.  3-6=-3↵
    无限制
    64M
    0
*/
#include <iostream>
using namespace std;

struct computer
{
    int op1, op2;
    char ch;
};

void run(computer *pb);

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        computer a;
        cin >> a.op1 >> a.ch >> a.op2;
        run(&a);
    }
    return 0;
}
void run(computer *pb)
{
    switch(pb->ch)
    {
        case '+':
            cout << pb->op1 << "+" << pb->op2 << "=" << pb->op1 + pb->op2 << endl;
            break;
        case '-':
            cout << pb->op1 << "-" << pb->op2 << "=" << pb->op1 - pb->op2 << endl;
            break;
        case '*':
            cout << pb->op1 << "*" << pb->op2 << "=" << pb->op1 * pb->op2 << endl;
            break;
        case '/':
            if(pb->op2 == 0)
                cout << pb->op1 << "/" << pb->op2 << "不能被0除" << endl;
            else
                cout << pb->op1 << "/" << pb->op2 << "=" << pb->op1 / pb->op2 << endl;
            break;
        default:
            cout << pb->op1 << "^" << pb->op2 <<"运算符有错" << endl;
            break;
    }
}