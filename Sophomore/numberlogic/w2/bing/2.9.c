#include <stdio.h>

int main()
{
    short a;
    short b;
    printf("Please enter the first 4-digit 8421 code (compressed) data: ");
    scanf("%hx", &a);
    printf("Please enter the second 4-digit 8421 code (compressed) data: ");
    scanf("%hx", &b);

    short sum = a + b;
    for (int i = 0; i < 4; i++)
    {
        short temp = (sum >> (i * 4)) & 0xF;
        if (temp > 9)
        {
            sum += (6 << (i * 4));
            if(i !=3){
                sum +=(1<<(i+1)*4);
            }
        }
    }
    printf("The result is: %04X\n", sum);
    return 0;
}