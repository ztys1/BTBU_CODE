/*
11.4 阶乘-递归函数

成绩: 5 / 折扣: 1
从键盘上输入一个自然数，要求调用求阶乘的递归函数fac来计算阶乘，并输出该数的阶乘。
提示：（计算阶乘的递归公式）
fac（n）= 1 （ｎ＝１）
fac（n）= fac（n-1）*n （ｎ>１）
注意11.3题与11.4题在函数调用形式上没有差别，只是函数体语句有差异。
预设代码

后置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
  int n;  
  scanf("%d",&n);//输入实参n  
  printf("%d\n",fac(n));//调用递归函数计算阶乘  
  return 0;  
}  
*/
int fac(int x)
{
    int s;
    if (x==1)
    {
        s=1;
    }
    else if(x>1)
    {
        s=(fac(x-1))*x;
    }
    return s;
    
}
/********/
#include <stdio.h>  
int main()  
{  
  int n;  
  scanf("%d",&n);//输入实参n  
  printf("%d\n",fac(n));//调用递归函数计算阶乘  
  return 0;  
}  