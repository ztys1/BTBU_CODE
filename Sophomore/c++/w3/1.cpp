/*
1.闰年判断-结构体变量

成绩: 5 / 折扣: 1
从键盘输入年月日，判断该年是否闰年并以年-月-日格式输出日期以及是否闰年。
预设代码

前置代码

view plainprint?
#include<iostream>  
using namespace std;  
struct Date{//日期结构体  
int year;  
int month;  
int day;  
};  
int main()  
{  
  Date x;//定义一个日期结构体变量  
  cin>>x.year>>x.month>>x.day;//从键盘输入年月日  
 	测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
2020 2 26↵
以文本方式显示
日期是2020-2-26↵
该年是闰年↵
无限制	64M	0
测试用例 2	以文本方式显示
2018 2 7↵
以文本方式显示
日期是2018-2-7↵
该年不是闰年↵
无限制	64M	0
*/