#include <stdio.h>

int main()
{
    short a = 0x1294; //8421BCD representation of 1294
    short b = 0x0567; //8421BCD representation of 567
    short sum = a + b;
    short carry = 0;
    for (int i = 0; i < 4; i++)
    {
        int digit_sum = (sum >> (i * 4)) & 0xF;
        if (digit_sum > 9)
        {
            sum += (6 << (i * 4));
            carry = ((sum >> ((i + 1) * 4)) & 0xF) > ((a >> ((i + 1) * 4)) & 0xF) + ((b >> ((i +1) *4)) &0xF);
        }
        else if(carry)
        {
            sum += (6 << (i *4));
            carry = ((sum >> ((i+1)*4))&0xF)>((a>>((i+1)*4))&0xF)+((b>>((i+1)*4))&0xF);
        }
    }
    printf("The result is: %04X\n", sum);
}