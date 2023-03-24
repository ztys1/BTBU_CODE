/*如果一个4位数等于它的各位数字的4次方和，则这个4位数称为“玫瑰花”数，例如1634就是一个玫瑰花数。求出所有玫瑰花数。*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("\n");
    for(a=1000;a<=9999;a++)
    {
        b=a/1000;
        c=(a%1000)/100;
        d=(a%100)/10;
        e=a%10;
        f=b*b*b*b+c*c*c*c+d*d*d*d+e*e*e*e;
        if(f==a)
        printf("%d\n",a);
    }
    return 0;
}