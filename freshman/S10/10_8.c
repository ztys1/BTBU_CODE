/*
10.8 数的逆序输出-函数有返回值

成绩: 5 / 折扣: 0.8
从键盘输入一个整数，要求调用函数revers逆序输出该数。
提示：此题是5.6题的函数版。注意与10.9题区别。
预设代码

前置代码

view plainprint?
#include <stdio.h>  
int revers(int x)  
{  
    int r=0;  
    while(x>0)  
    {  
     r=r*10+x%10;  
     x=x/10;  
    }  
    return r;  
}  
*/

#include <stdio.h>  
int revers(int x)  
{  
    int r=0;  
    while(x>0)  
    {  
     r=r*10+x%10;  
     x=x/10;  
    }  
    return r;  
}  
/**************/
int main()  
{  
    float r;  
    scanf("%f",&r);  
    printf("%d\n",revers(r));  
    return 0;  
}  
