#include <stdio.h>

int main()
{
    short a = 0x1294; // 8421码（压缩型）数据
    short b = 0x0567; // 另一个8421码（压缩型）数据
    short sum = a + b;
    short carry = 0;
    for (int i = 0; i < 4; i++)
    {
        short temp = (sum >> (i * 4)) & 0xF;
        if (temp > 9)
        {
            sum += (6 << (i * 4));
            carry = (sum >> ((i + 1) * 4)) & 0xF;
            if(carry >9){
                sum += (6 << ((i +1) * 4));
            }
        }
    }
    printf("The result is: %04X\n", sum);
    return 0;
}
