#include <stdio.h>
int main()
{
    float a,b,c;
    //in
    scanf("%f %f\n",&a,&b);
    
    //caculate
    c=a*0.3+b*0.7;
    
    //out
    printf("总评=%.2f\n",c);
    return 0;
}