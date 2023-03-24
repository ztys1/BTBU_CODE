/*
10.7 区间求和-函数

成绩: 5 / 折扣: 0.8
计算区间[m,n)内的自然数的和并输出。m、n从键盘输入。
提示：此题是3.3题的函数版。注意根据预设代码中main的相应函数调用形式，分析定义函数的返回值形式、函数名以及函数参数类型以及个数
预设代码

后置代码

view plainprint?
int main()  
{  
    int s,m,n;  
    scanf("%d%d",&m,&n);  
    s=sum(m,n);  
    printf("%d\n",s);  
    return 0;  
}  
*/
#include <stdio.h>

int sum(int m,int n)
{
    int i;
    int su=0;
    for(i=m;i<n;i++)
    {su=su+i;}
    return su;
}

/************/
int main()  
{  
    int s,m,n;  
    scanf("%d%d",&m,&n);  
    s=sum(m,n);  
    printf("%d\n",s);  
    return 0;  
}  

