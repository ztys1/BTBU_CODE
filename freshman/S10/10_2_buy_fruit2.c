/*
王小二同学是一个聪明的孩子，他到超市去买东西，
设苹果3.5元/公斤，香蕉4.2元/公斤，
他买了a斤苹果，b斤香蕉。
a和b从键盘输入，请计算应该付多少钱？
*/

#include <stdio.h>  
void fun(int a,int b)  
{  
    printf("%.1f元\n",3.5*a+4.2*b); 
}  
int main()  
{  
    int a,b;
    int sum;  
    scanf("%d%d",&a,&b);  
/***************************************/
    fun(a,b);
    return 0;
}