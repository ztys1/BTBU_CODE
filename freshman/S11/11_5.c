/*
11.5 数的逆序输出-递归函数

成绩: 10 / 折扣: 1
从键盘输入一个整数，要求定义函数revers逆序输出该数。
revers函数原型为 void revers(int x),功能是实现数x的逆序输出。
提示：（数的逆序输出的递归公式）
直接输出n                                                                                                                  （ｎ<10，即n为个位数，则直接输出n）
先输出n的个位数，即n%10 ，然后调用reversNum(n/10)逆序输出其他各个位数 。  （ｎ>=10，即n为多位数，则先输出个位上的数，再输出其他各个位数）

此题是6.9题的递归函数版。注意调用时，与6.9题区别。另外函数体不一样。

预设代码

前置代码

view plainprint?
#include <stdio.h>  
void revers(int x);//函数声明   
int main()        
{  
    int x;     
    scanf("%d",&x);       
    revers(x);//调用递归函数输出x的翻转数  
    printf("\n");//因为递归函数输出没有以换行结束，所以调用递归函数后要补充一个换行  
    return 0;     
}  
*/
#include <stdio.h>  
void revers(int x);//函数声明   
int main()        
{  
    int x;     
    scanf("%d",&x);       
    revers(x);//调用递归函数输出x的翻转数  
    printf("\n");//因为递归函数输出没有以换行结束，所以调用递归函数后要补充一个换行  
    return 0;     
}  
/********/
void revers(int s)
{
    int n;
    if(n<10)
    {
        s=n;
    }
    if(n>=10)
    {
        s=(revers(s)%10)*10;
    }
}
//不要思维定势，不一定都需要递归，看看11_5_2
