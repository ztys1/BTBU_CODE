/*1.8 圆的面积和周长

成绩: 10 / 折扣: 0.8
从键盘输入圆的半径，计算圆的面积和周长并输出（圆周率用3.1415926进行计算*/
#include <stdio.h>
int main()
{
    float c;
    float f;
    float a;
    scanf("%f\n", &c);
    f=3.1415926*(c*c);
    a=3.1415926*2*c;
    printf("面积=%.2f,周长=%.2f\n",f,a);
    return 0;
}
/*为什么c^2不行*/