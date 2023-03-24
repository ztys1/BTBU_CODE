/*
1.8 学生信息管理

成绩: 5 / 折扣: 1
从键盘输入一个学生的姓名、学号、三门课成绩，输出其姓名与三门课平均成绩。

预设代码

前置代码

view plainprint?
#include <iostream>
using namespace std;
struct STUSCORE {
    char    strName[12];            // 姓名
    int iStuNO;         // 学号
    float   fScore[3];          // 三门课程成绩
};
float GetAverage(STUSCORE one)               // 计算平均成绩
{
    return (float)((one.fScore[0] + one.fScore[1] + one.fScore[2])/3.0);
}
int main()
{
    STUSCORE one;//定义一个学生结构体变量
    测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
LiMing 21020501 80 90 65↵
以文本方式显示
LiMing的平均成绩为78.3333↵
无限制	64M	0
*/

#include <iostream>
using namespace std;
struct STUSCORE
{
    char strName[12]; // 姓名
    int iStuNO;       // 学号
    float fScore[3];  // 三门课程成绩
};
float GetAverage(STUSCORE one) // 计算平均成绩
{
    return (float)((one.fScore[0] + one.fScore[1] + one.fScore[2]) / 3.0);
}
int main()
{
    STUSCORE one; // 定义一个学生结构体变量

    //
    float c;
    cin >> one.strName;
    cin >> one.iStuNO;
    cin >> one.fScore[0] >> one.fScore[1] >> one.fScore[2];

    c = GetAverage(one);

    cout << one.strName << "的平均成绩为" << c << endl;
    return 0;
}