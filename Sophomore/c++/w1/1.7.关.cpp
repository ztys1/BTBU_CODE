/*
1.7 输出个人信息

成绩: 5 / 折扣: 1
从键盘输入自己的班级、学号、姓名，将信息输出到屏幕。
预设代码

前置代码

view plainprint?
#include <iostream>  
using namespace std;  
struct student  
{  
    int bj;  
    char num[10];  
    char name[10];  
};  
int main()  
{  
    student s;//注意C++中结构体变量定义与C中的不同之处  
    cin>>s.bj>>s.num>>s.name;  
 	测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
1 090101 李敏↵
以文本方式显示
班级:1↵
学号:090101↵
姓名:李敏↵
无限制	64M	0
*/

#include <iostream>  
using namespace std;  
struct student  
{  
    int bj;  
    char num[10];  
    char name[10];  
};  
int main()  
{  
    student s;//注意C++中结构体变量定义与C中的不同之处  
    cin>>s.bj>>s.num>>s.name;  
//
cout<<"班级:"<<s.bj<<endl;
cout<<"学号:"<<s.num<<endl;
cout<<"姓名:"<<s.name<<endl;
return 0;
}