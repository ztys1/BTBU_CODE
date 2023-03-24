//编写程序，从键盘输入任意一个数x，求出对应的分段函数y的值并输出，以2位小数形式。

#include <stdio.h>
int main()
{
    float a;
    //in
    scanf("%f\n",&a);
    
    //caculate
    if(a<0)
    printf("%.2f\n",a+1);    
    
    else if((a<=0)&&a<1)
    printf("11.00\n");    
    
    if(a>=1)
    printf("%.2f\n",a*a*a);    

    return 0;
}