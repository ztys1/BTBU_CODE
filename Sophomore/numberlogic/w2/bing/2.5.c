
#include <stdio.h>

int main()
{
    short a = 0x1294; // 8421码（压缩型）存储1294
    short b = 0x6790; // 8421码（压缩型）存储6790
    short c = a + b;
    short carry = 0x0666; // 进位修正值

    c += (c & carry) << 2; // 对每一位进行加6修正
    c += (c & carry) << 2; // 再次进行加6修正以处理连续进位的情况

    printf("结果为：%04X\n", c & 0xFFFF); // 输出结果为8084的8421码（压缩型）
    return 0;
}