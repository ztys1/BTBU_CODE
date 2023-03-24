/*
键盘输入三个整数，找到其中最大者。
要求调用fun函数实现求三个数最大值，该函数声明：int fun(int x,int y);
*/

int fun(int x,int y)
{
    if(x > y)
        return x;
    else
        return y;
}

//后置代码
#include  <stdio.h>     
int main()     
{     
 int a,b,c,max;  
 scanf("%d%d%d",&a,&b,&c);  
 max=fun(a,b);//得到ab两数最大值max  
 max=fun(max,c);//得到max和c的最大值，即abc的最大值  
 printf("max=%d\n",max);  
 return 0;  
}  