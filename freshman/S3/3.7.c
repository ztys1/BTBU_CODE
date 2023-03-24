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
    }
    }
    printf("%.0f\n",sum);
    return 0;
}