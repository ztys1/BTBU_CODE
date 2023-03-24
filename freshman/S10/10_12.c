/*
10.12 第n个闰年-函数

成绩: 10 / 折扣: 0.8
从键盘输入 m 和 n ，要求计算从 m 开始的第 n 个闰年并输出。
其中闰年判断用函数IsLeap，闰年条件是能被4整除但不能被100整除；能被400整除
提示：本题是5.5题的函数版
预设代码

前置代码

view plainprint?
#include <stdio.h>  
int IsLeap(int year)  
{  
    if((year%4==0&&year%100!=0)||year%400==0)  
        return 1;  
    else   
        return 0;  
}  
*/
#include <stdio.h>  
int IsLeap(int year)  
{  
    if((year%4==0&&year%100!=0)||year%400==0)  
        return 1;  
    else   
        return 0;  
}  
/********/
int main()
{
    int m,a,year,n,i,flag=1;
    scanf("%d %d\n",&m,&n);
    a=m;
    for ( i = 0 ; i < n ; i ++)
    {
        year=a;
        while(IsLeap(year)==0&&flag==1)
        {
            flag=1;
            
            if (IsLeap(year)==1)
                {
                    flag=0;
                }
            a++;
            year=a;
        }
        a++;

    }
    printf("%d\n",a-1);
}