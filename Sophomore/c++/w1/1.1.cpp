/*
1.1 圆的面积计算
成绩: 5 / 折扣: 1
从键盘上输入半径，输出圆面积，π取3.14。
*/
#include <stdio.h>
int main()
{
    float r;
    float f;
    
    scanf("%f\n", &r);
    f=3.1415926*(r*r);
    
    printf("面积=%.2f\n",f);
    return 0;
}