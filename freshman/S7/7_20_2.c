/*
7.20 数字出现的次数（难）

成绩: 5 / 折扣: 0.8
从键盘上输入一个正整数n和m（范围是0到9），输出从1到n这n个整数中m出现的次数。
例如输入n为12，m为1，从1到12这些整数中包含1的数字有1，10，11和12，1一共出现了5次。（google面试题）。
提示：利用/ 和 %运算符，逐个判断各位。
*/
#include <stdio.h>
int main()
{
    //定义变量
    int n=12,m=1;
    int i;
    //输入
    
    
    int a[13];
    
    for(i=0;i<n;i++)//输入数组；
    {
        a[i]=i+1;
    }
    int b=1;//差
    int c=10;//
    int d=0;//位数
    for(i=0;b>0;i++)//19：38 循环 位数、除的数、减的数
    {
        b=n-c;
        c*=10;
        if(b<0)
        {
            d=i+1;//位数19:47
            break;
        }
    }
    int q[13];//从**最大数开始**，记录每位数字
    int e=0;//取余的除数
    int j;
    int f[13];//记录个数
    
    //初始化q[j]、f[j]
    for(i=0;i<n;i++)
    {
        q[i]=0;
        f[i]=0;
    }
    
    //除//外层循环n个数，内层循环1个数
    for(j=n;j>0;j--)
    {
        for(i=d;i>0;i--)
            {     
            q[j]=((a[j-1]-q[n]*10)/10);//最大位的数。循环起始q[j]=0
            //判断个数
            
                if(q[j]==m)
                {
                    f[n]++;
                }
            }
        
        
    }
    
    //输出
    printf("%d",f);
    return 0;
}