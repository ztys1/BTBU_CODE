/*
11.1 累加求和-普通函数

成绩: 5 / 折扣: 1
编写名为sum的普通函数，函数原型为int sum(int x)。该函数功能是累计1+2+3+4+...n之和。实参n从键盘输入。
提示：
注意11.1题与11.2题在函数调用形式上没有差别，只是函数体语句有差异。
预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
    int s,n;  
    scanf("%d",&n);  
    s=sum(n);//调用sum普通函数累加1-n的和  
    printf("%d\n",s);  
    return 0;  
}  
*/

int sum(int x)
{
    int i;
    int sum=0;
    for(i=1; i<=x; i++)
        sum+=i;
    return sum;
}

/**********************************/
//后置代码
#include <stdio.h>  
int main()  
{  
    int s,n;  
    scanf("%d",&n);  
    s=sum(n);//调用sum普通函数累加1-n的和  
    printf("%d\n",s);  
    return 0;  
}  