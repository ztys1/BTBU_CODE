/*
10.14 多项式求和7-普通函数

成绩: 5 / 折扣: 0.8
有一个分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前n项之和（要求用函数实现），n由键盘输入。

预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
int n;  
scanf("%d",&n);  
printf("%.5f\n",fun(n));//调用fun函数计算多项式之和  
return 0;  
}  
*/

float fun(int n)
{
    float sum=0,a=2,t=0,b=1;
    int i;
    for(i=0;i<n;i++)
    {
        sum=(float)sum+a/b;
        t=a;
        a=(float)a+b;   
        b=t;
    }
    return sum;
}

/********/
#include <stdio.h>  
int main()  
{  
int n;  
scanf("%d",&n);  
printf("%.5f\n",fun(n));//调用fun函数计算多项式之和  
return 0;  
}  