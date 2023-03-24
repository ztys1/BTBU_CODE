#include<stdio.h>

int main()

{

    int i=0,s=0;

    float sum=0,ave=0;

    for(i=0;i<10;i++) 

    {

    scanf("%d",&s);

    sum+=s;

    }

    ave=sum/10;


    printf("%.1f\n",ave);
    return 0;
}