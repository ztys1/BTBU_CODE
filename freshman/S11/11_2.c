/*
编写名为sum的递归函数，函数原型为int sum(int x)。该函数功能是累计1+2+3+4+...n之和。实参n从键盘输入。
提示：（累计求和的递归公式）
sum（n）= 1 （ｎ＝１）
sum（n）= sum（n-1）+n （ｎ>１）
*/
int sum(int x)
{
    int s;
    if(x==1)
        s = 1;
    else
        s = sum(x-1) + x; 
    return s;
}

/*********************************/
//后置代码
#include <stdio.h>  
int main()  
{  
    int s,n;  
    scanf("%d",&n);  
    s=sum(n);//调用sum递归函数累加1-n的和  
    printf("%d\n",s);  
    return 0;  
}  