/*
从键盘输入两个数，输出最大值。两个数从键盘输入。
要求调用fun函数实现两数求最大值，该函数声明：int fun(int *p1,int *p2);
*/

int fun(int *p1,int *p2)
{
    if(*p1>*p2)
        return *p1;
    else 
        return *p2;
}

//后置代码
#include <stdio.h>  
int main()  
{  
    int x,y;  
    scanf("%d%d",&x,&y);  
    printf("%d\n",fun(&x,&y));//调用fun函数得到两数最大值  
        return 0;  
}  