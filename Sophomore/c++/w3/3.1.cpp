/*
3.1 问候类设计与测试

成绩: 5 / 折扣: 1
从键盘输入的姓名（不超过10个字符），要求输出格式类似Hello,姓名的问候语字符串。
C++写的面向过程的代码如下：
#include <iostream>
using namespace std;
int main()
{
 char msg[10];
 cin>>msg;
 cout<<"Hello,"<<msg<<endl;
 return 0;
}
要求将上述代码改写，定义一个问候类的形式，并测试该类。
    测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
China↵
以文本方式显示
Hello,China↵
无限制	64M	0
测试用例 2	以文本方式显示
btbu↵
以文本方式显示
Hello,btbu↵
无限制	64M	0
*/
#include <iostream>

using namespace std;

class Greeting
{

public:
    void sayHello(string name)
    {
        cout << "Hello," << name << endl;
    }
};

int main()
{
    string name;
    cin >> name;
    Greeting greeting;
    greeting.sayHello(name);
    return 0;
}
