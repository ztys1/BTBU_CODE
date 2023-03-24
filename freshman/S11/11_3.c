/*
11.3 阶乘-普通函数

成绩: 5 / 折扣: 1
从键盘上输入一个自然数，要求调用求阶乘的普通函数fac来计算阶乘，并输出该数的阶乘。
提示：本题是3.2题的函数版
注意11.3题与11.4题在函数调用形式上没有差别，只是函数体语句有差异。
预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
  int n;  
  scanf("%d",&n);//输入实参n  
  printf("%d\n",fac(n));//调用普通函数计算阶乘  
  return 0;  
}  
*/
int fac(int x)
{
    int i;
    int fac=1;
    for(i=1; i<=x; i++)
        fac*=i;
    return fac;
}

/******/
#include <stdio.h>  
int main()  
{  
  int n;  
  scanf("%d",&n);//输入实参n  
  printf("%d\n",fac(n));//调用普通函数计算阶乘  
  return 0;  
}  
