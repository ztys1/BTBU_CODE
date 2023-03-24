/*
7 两数交换

成绩: 5 / 折扣: 1
从键盘输入2个整数，交换二者的值，然后输出。
要求调用fun函数实现两数交换，函数声明如下：
void fun(int *p1,int *p2);
预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
    int x,y,*px=&x,*py=&y;  
    scanf("%d%d",px,py);  
    fun(px,py);//调用fun函数实现两数交换  
    printf("%d,%d\n",*px,*py);  
    return 0;  
}  
*/

void fun(int *p1,int *p2)
{
    float t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
///
#include <stdio.h>  
int main()  
{  
    int x,y,*px=&x,*py=&y;  
    scanf("%d%d",px,py);  
    fun(px,py);//调用fun函数实现两数交换  
    printf("%d,%d\n",*px,*py);  
    return 0;  
}  