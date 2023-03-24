/*
10.9 数的逆序输出-函数无返回值

成绩: 5 / 折扣: 0.8
从键盘输入一个整数，要求定义函数revers逆序输出该数。
提示：此题是5.6题的函数版。注意与10.8题区别。
由于函数定义在后面，函数调用在前面，所以本题中预设代码包含函数的声明语句。
预设代码

前置代码

view plainprint?
#include <stdio.h>  
void revers(int x);//函数声明   
int main()        
{  
    int x;     
    scanf("%d",&x);       
    revers(x);//输出x的翻转数  
    return 0;     
}  
*/
#include <stdio.h>  
void revers(int x);//函数声明   
int main()        
{  
    int x;     
    scanf("%d",&x);       
    revers(x);//输出x的翻转数  
    return 0;     
}  
/********/
void revers(int x)
{  
    int r=0;  
    while(x>0)  
    {  
     r=r*10+x%10;  
     x=x/10;  
    }  
    printf("%d\n",r);  
}  

