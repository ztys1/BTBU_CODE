/*
键盘输入三个整数，找到其中最大者。
要求调用fun函数实现求三个数最大值，
该函数声明：int fun(int *p1,int *p2);
*/
int fun(int *p1,int *p2)     
{     
 int max; 
 max=*p1;
 if(max<*p2) max=*p2;
 return max;
}  
//前置代码
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max_ab = fun(&a,&b);
    printf("max=%d\n",fun(&max_ab,&c));
    return 0;
}
