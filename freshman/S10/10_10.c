/*

10.10 素数判断-函数

成绩: 5 / 折扣: 0.8
从键盘上输入一个大于或等于2的正整数m,要求定义一个函数判断它是否是素数。m从键盘输入。
提示：此题是4.16题的函数版。注意根据预设代码中main的相应函数调用形式，分析定义函数的返回值形式、函数名以及函数参数类型以及个数
预设代码

后置代码

view plainprint?
int main()  
{  
    int m;  
    scanf("%d",&m);  
    if(pdprim(m)==1)   
        printf("素数\n");  
    else  
        printf("不是素数\n");  
}  

*/
#include<stdio.h>//头文件
int pdprim(int m)
{
    int i,e;//定义变量
  
    for(i=2;i<=m-1;i++)//循环从2开始，到这个数的前一个数为止
    {
        if(m%i==0)//如果取余结果为0
        break;
    }
  
    if(i<m)
    {
        e=0;
    }
    else
    {
        e=1;
    }
    return e; //函数返回值
}

/********/

int main()  
{  
    int m;  
    scanf("%d",&m);  
    if(pdprim(m)==1)   
        printf("素数\n");  
    else  
        printf("不是素数\n");  
}  
