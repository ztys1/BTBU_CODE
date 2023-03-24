/*
从键盘输入两个实数，实现降序（按由大到小的顺序）排序输出(以2位小数形式)。
排序时涉及两数交换，要求通过调用函数fun对两数进行交换。
函数声明：void fun(float *p1,float *p2);
*/
void fun(float *p1,float *p2)  
{  
    float t;  
    t=*p1;  
    *p1=*p2;  
    *p2=t;  
}
//前置代码
#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    if(a<b)
        fun(&a,&b);
    printf("%.2f,%.2f\n",a,b);
    return 0;
}