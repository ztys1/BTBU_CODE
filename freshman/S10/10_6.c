/*
10.6 圆的面积和周长-函数

成绩: 5 / 折扣: 0.8
从键盘输入圆的半径，要求定义2个函数分别计算圆的面积和周长并输出（圆周率用3.1415926进行计算）
提示：此题是1.8题的函数版。注意根据预设代码中main的相应函数调用形式，分析定义函数的返回值形式、函数名以及函数参数类型以及个数
预设代码

后置代码

view plainprint?
int main()  
{  
    float r;  
    scanf("%f",&r);  
    printf("面积=%.2f,周长=%.2f\n",area(r),cir(r));  
    return 0;  
}  
*/
#include <stdio.h>

float area(float r)
{
    float area;
    area=3.1415926*(r*r);
    return area;
}

float cir(float r)
{
    float cir;
    cir=3.1415926*(2*r);
    return cir;
}
/**********************/
int main()  
{  
    float r;  
    scanf("%f",&r);  
    printf("面积=%.2f,周长=%.2f\n",area(r),cir(r));  
    return 0;  
}  
