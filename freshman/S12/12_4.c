/*
从键盘输入2个整数，交换二者的值，然后输出。
要求调用fun函数实现两数交换，
该函数声明：void fun(int *p1,int *p2);
*/
void fun(int *p1,int *p2)//形参是两个指针变量，参数传递指针变量
{//实参px,py，分别指向变量x和y。
    int temp;//定义一个中间变量
    temp = *p1;//用解引用操作符取数据,把x赋值给temp
    *p1 = *p2;//指针的解引用，在内存里面，相当于把y赋值给x
    *p2 = temp;//把temp的值，赋值给变量y
}

//后置代码
#include <stdio.h>  
int main()  
{  
    int x,y,*px,*py;//定义两个指针变量，px和py，分别初始化为变量x和y的地址。 
    px = &x;
    py = &y;
    //scanf("%d%d",&x,&y);
    scanf("%d%d",px,py);  
    fun(px,py);//调用fun函数实现两数交换  
    printf("%d,%d\n",*px,*py);  
    return 0;
}  