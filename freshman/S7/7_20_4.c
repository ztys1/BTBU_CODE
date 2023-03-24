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
    int n,m;
    int i;
    int a[13];//1-n
    int f[13];//记录每个数的m次数

    int k,e,j,g,h;

    int z;
    
    //输入
    scanf("%d,%d\n",&n,&m);

    //造1-n
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    
    
    
    //初始化f[j]
    for(i=0;i<=n;i++)
    {
    
        f[i]=0;
    }
    
    //除//外层循环n个数，内层循环1个数
    for(i=0;i<n;i++)
    {
        //n的位数
        int b=1;//差
        int c=10;
        int d=0;//位数
        for(i=0;b>0;i++)
        {
            b=n-c;
            c*=10;
            if(b<0)
            {
                d=i+1;//位数
                break;
            }
        }

        switch (d)
        {
        case 1:
            h=a[i]%10;
            if(h==m)
            {
                f[i]++;
            }
            break;
        case 2:
            g=(a[i]%100)/10;
            h=a[i]%10;
            if(g==m)
            {
                f[i]++;
            }
            if(h==m)
            {
                f[i]++;
            }
            break;
        case 3:
            j=(a[i]%1000)/100;
            g=(a[i]%100)/10;
            h=a[i]%10;
            if(j==m)
            {
                f[i]++;
            }
            if(g==m)
            {
                f[i]++;
            }
            if(h==m)
            {
                f[i]++;
            }
            break;
        case 4:
            e=(a[i]%10000)/1000;
            j=(a[i]%1000)/100;
            g=(a[i]%100)/10;
            h=a[i]%10;
            if(e==m)
            {
                f[i]++;
            }
            if(j==m)
            {
                f[i]++;
            }
            if(g==m)
            {
                f[i]++;
            }
            if(h==m)
            {
                f[i]++;
            }
            break;
        case 5:
            k=a[i]/10000;
            e=(a[i]%10000)/1000;
            j=(a[i]%1000)/100;
            g=(a[i]%100)/10;
            h=a[i]%10;
            if(k==m)
            {
                f[i]++;
            }
            if(e==m)
            {
                f[i]++;
            }
            if(j==m)
            {
                f[i]++;
            }
            if(g==m)
            {
                f[i]++;
            }
            if(h==m)
            {
                f[i]++;
            }
            break;
        default:
            break;
        }
        
        
    }
    
    //输出
    for(i=0;i<=n;i++)
    {
        z+=f[i];
    }
    printf("%d",z);
    return 0;
}