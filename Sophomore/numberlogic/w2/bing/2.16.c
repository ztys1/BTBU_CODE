#include <stdio.h>

short dec_to_bcd(int dec)
{
    short bcd = 0;
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

    short a = dec_to_bcd(x);
    short b = dec_to_bcd(y);
    
    short sum = a + b;
    short carry = 0;
    
    for (int i = 0; i < 4; i++)
    {
        int digit_sum = (sum >> (i * 4)) & 0xF;
        if (digit_sum > 9)
        {
            sum += (6 << (i * 4));
            carry = ((sum >> ((i +1) *4))&0xF)>((a>>((i+1)*4))&0xF)+((b>>((i+1)*4))&0xF);
        }
        else if(carry)
        {
            sum +=(6<<(i*4));
            carry=((sum>>((i+1)*4))&0xF)>((a>>((i+1)*4))&0xF)+((b>>((i+1)*4))&0xF);
        }
        
     }
     printf("The result is: %04X\n", sum);
}
/*
Sure! Here’s a detailed explanation of how the code works:

First, the program includes a dec_to_bcd function that takes a decimal number as input and returns its BCD representation. The function uses a loop to repeatedly divide the decimal number by 10 and take the remainder. The remainder is then shifted left by i * 4 bits (where i is the current iteration of the loop) and ORed with the bcd variable to build up the BCD representation.

In the main function, two decimal numbers are taken as input from the user using scanf. These numbers are then converted to their BCD representations using the dec_to_bcd function.

Next, normal binary addition is performed on these two BCD numbers to get an initial sum. A loop is then used to check each digit of this sum to see if it needs to be corrected according to the rules you provided. If a digit is greater than 9, it adds 6 to that digit and checks for a carry. If there is a carry from a lower digit, it also adds 6 to that digit.

Finally, after all digits have been checked and corrected if necessary, the final result is printed in hexadecimal format using printf.

I hope this explanation helps you understand how the code works! 😊
*/