#include <stdio.h>

unsigned short dec_to_bcd(int dec)
{
    unsigned short bcd = 0;
    for (int i = 0; dec > 0; i++)
    {
        bcd |= (dec % 10) << (i * 4);
        dec /= 10;
    }
    return bcd;
}

int main()
{
    int x, y;
    printf("Enter two decimal numbers: ");
    scanf("%d %d", &x, &y);

    unsigned short a = dec_to_bcd(x);
    unsigned short b = dec_to_bcd(y);
    
    unsigned int sum = a + b;

    if ((sum & 0x000f) > 9) sum += 6;
    if ((sum & 0x00f0) > 0x90) sum += 0x60;
    if ((sum & 0x0f00) > 0x900) sum += 0x600;
    if ((sum & 0xf000) > 0x9000) sum += 0x6000;

     while (sum >9999)
         sum=(sum&9999)+(sum/10000)*16;

     printf("The result is: %04X\n", sum);

     return(0);
}