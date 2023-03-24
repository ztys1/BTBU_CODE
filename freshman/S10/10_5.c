/*
10.5 买榴莲-函数无返回值

成绩: 5 / 折扣: 0.8
超市规定，重量大于 5kg 的榴莲 12 元 /kg ，不大于 5kg 的榴莲 10 元 /kg 。
从键盘输入榴莲重量，要求定义一个无返回值的函数，调用该函数计算并输出榴莲价格。
注意此题与10.4题区别。
预设代码

后置代码

view plainprint?
int main()  
{  
    int a;  
    scanf("%d",&a);  
    cost(a);   
    return 0;  
}  
*/
#include <stdio.h>

void cost(int a)
{
    int b;
    if(a<=5)
        b=10*a;
    else
        b=12*a;
    printf("%d元\n",b);
}

/***********************************/
int main()  
{  
    int a;  
    scanf("%d",&a);  
    cost(a);   
    return 0;  
}