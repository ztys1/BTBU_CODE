/*
从键盘输入两个数，输出最大值。两个数从键盘输入。
要求调用fun函数实现两数求最大值，该函数声明：int *fun(int *p1,int *p2);
此题是2.3或者2.8题的函数指针版（即指针作函数返回值）
*/
void max(int a, int b);//没有返回值
int max(int a, int b);//函数返回一个整型变量

int *fun(int *p1,int *p2)//形参是两个指针变量
{
//函数指针：函数的返回值是指针类型
    if(*p1>*p2)//p1指向变量x,p2指向变量y
        return p1;//返回的指针变量，指向的是x和y中较大的一个。
    else
        return p2;
}
//后置代码
#include <stdio.h>  
int main()  
{  
    int x,y,*max=NULL;  
    scanf("%d%d",&x,&y);
    max=fun(&x,&y);//调用fun函数得到两数最大值的地址 实参：
    printf("%d\n",*max);
        return 0;
}

