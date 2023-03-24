#include <stdio.h>
int main()
{
    int a;
    //in
    scanf("%d\n",&a);
    
    //caculate
    if((a%4==0&&a%100!=0)||a%400==0)
    
    printf("闰年\n");
    
    else

    printf("非闰年\n");

    return 0;
}