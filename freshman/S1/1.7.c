/*1.7 温度转换

成绩: 10 / 折扣: 0.8
从键盘输入华氏温度，将它转换为摄氏温度并输出（保留2位小数）。
转换公式：c=5÷9×(f-32)*/
#include <stdio.h>
int main()
{
    float c;
    float f;
    scanf("%f\n", &f);
    c=(f-32)*5/9;
    printf("%.2f\n",c);
    return 0;
}