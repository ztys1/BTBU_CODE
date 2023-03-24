/*
1.6 最大数与位置

成绩: 5 / 折扣: 1
从键盘上输入n个数（n也从键盘输入），输出其中最大数以及最大数所在的位置。本题要求用数组实现。
预设代码

前置代码

view plainprint?
#include <iostream>  
using namespace std;  
int main()  
{  
 int a[100],i,max,n;//max记录最大数的下标  
 cin>>n;  
 for(i=0;i<n;i++)//输入n个数并保存到数组a  
     cin>>a[i];  
 	测试输入帮助，input (新窗口)	期待的输出帮助，expectedoutput (新窗口)	时间限制帮助，timelimit (新窗口)	内存限制帮助，memlimit (新窗口)	额外进程帮助，nproc (新窗口)
测试用例 1	以文本方式显示
10↵
1 0 4 8 12 65 -76 100 -45 123↵
以文本方式显示
max=123,位于第10个↵
无限制	64M	0
*/
#include <iostream>  
using namespace std;  
int main()  
{  
 int a[100],i,max,n;//max记录最大数的下标  
 cin>>n;  
 for(i=0;i<n;i++)//输入n个数并保存到数组a  
     cin>>a[i];  

//
max=0;
char m=',';
for (i=0;i<n;i++)
{
    if(a[i]>max)
    max=a [i];
}

int loc ;
for (loc=0;loc<n;loc++)
{
    if(a[loc]==max)
    cout<<"max="<<max<<m<<"位于第"<<loc+1<<"个"<<endl;
}
return 0;
}