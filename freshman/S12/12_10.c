/*
键盘输入三个整数，找到其中最大者。
要求调用fun函数实现求三个数最大值，
该函数声明：int *fun(int *p1,int *p2);
*/
//int *pa;//指针变量名是pa
int *fun(int *p1,int *p2)  //形参是两个指针变量，返回值也是指针变量   
{     
 int *max;  
 max=p1;  
 if(*max<*p2)
   max=p2;  
 return max; //实现的让指针变量指向大者
}  
//前置代码

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *max_ab = fun(&a,&b);//函数调用的时候，把*省略
    int *max_final = fun(max_ab,&c);
    printf("max=%d\n",*max_final);//fun(max_ab,&c)返回
    printf("%f\n",NULL);
    return 0;
}