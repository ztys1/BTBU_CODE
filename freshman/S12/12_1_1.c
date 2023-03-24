#include <stdio.h>
int main()
{
    int a,b;
    int *max=NULL;

    //
    scanf("%d %d",&a,&b);
    if(a>b)
    max = &a;
    else
    max = &b;

    //
    printf("max=%d",*max);
    return 0;
}