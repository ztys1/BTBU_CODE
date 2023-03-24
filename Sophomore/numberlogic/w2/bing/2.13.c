#include <stdio.h>

int main()
{
    unsigned short a = 0x1294; // 第一个BCD数
    unsigned short b = 0x6790; // 第二个BCD数
    unsigned int sum = a + b; // 两个BCD数的和

    // 按照规则修正每一位数字
    if ((sum & 0x000f) > 9) sum += 6;
    if ((sum & 0x00f0) > 0x90) sum += 0x60;
    if ((sum & 0x0f00) > 0x900) sum += 0x600;
    if ((sum & 0xf000) > 0x9000) sum += 0x6000;

    // 处理进位
    while (sum > 9999)
        sum = (sum & 9999) + (sum /10000)*16;

    printf("结果是: %04X\n", sum);

    return 0;
}