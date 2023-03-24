/*有一圆锥，半径和高度从键盘输入，请计算其体积并输出，要求保留2位小数。圆周率用3.1415926参与计算。
提示：V= (1/3)π(r^2)×h*/
#include <stdio.h>
int main()
{
    double r=0.0,h=0.0;
    double p=3.1415926;
    scanf("%lf %lf\n",&r,&h);
    printf("%.2lf\n",(1.0/3)*p*r*r*h);
    return 0;
}