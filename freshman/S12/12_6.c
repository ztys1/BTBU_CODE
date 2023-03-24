/*
从键盘输入两个数，输出最大值。两个数从键盘输入。
要求调用fun函数实现两数求最大值，
该函数声明：void fun(int *p1,int *p2);
*/

#include <stdio.h>  
void fun(int *p1,int *p2);//函数声明  
int main()  
{  
    int x,y;  
    scanf("%d%d",&x,&y);  
    fun(&x,&y);//调用fun函数得到两数最大值并输出  
        return 0;  
} 
//前置代码
void fun(int *p1,int *p2)
{
    if(*p1 > *p2)
        printf("%d\n",*p1);
    else
        printf("%d\n",*p2);
}