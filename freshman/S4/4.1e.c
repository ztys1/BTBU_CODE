#include <stdio.h>
#define PI 3.1415926
int main()
{
    double r,h;
    printf("请输入圆锥底面半径：");
    scanf("%lf",&r);
    printf("请输入圆锥高度：");
    scanf("%lf",&h);
    printf("该圆锥体积为：%.2lf\n",1.0/3*PI*r*r*h);
}