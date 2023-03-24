#include <stdio.h>
int main()
{
    float a,b,c;
    //in
    scanf("%f\n",&a);
    
    //caculate
    b=a/2.54;
    c=b/12;
    
    //out
    printf("%.2f厘米=%.2f英寸=%.2f英尺\n",a,b,c);
    return 0;
}