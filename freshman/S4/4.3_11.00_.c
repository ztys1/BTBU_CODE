/*编写程序，从键盘输入任意一个数x，求出对应的分段函数y的值并输出，以2位小数形式。*/
#include <stdio.h>
int main()
{
    float x,y;
    scanf("%f\n",&x);
    if (x<0)
    {
        y=x+1;
    }    
    else if (0<=x&&x<1)
    {
        y=11.00;
    }
    else if (x>=1)
    {
        y=x*x*x;
    }
    printf("%.2f\n",y);
    return 0;

    
}
    
    
