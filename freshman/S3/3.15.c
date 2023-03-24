/*从键盘上输入10个数，输出其中偶数。
提示：在3.7题基础上，将求和改为数的输出*/
#include<stdio.h>

int main()

{

    int i=0,s=0;

    float sum=0,ave=0;

    for(i=0;i<10;i++) 

    {

    scanf("%d",&s);
    if (s%2==0)
    {
        sum+=s;
        printf("%d,",s);
    }
    }
    printf("\n");
    return 0;
}