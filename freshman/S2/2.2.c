/*2.2 求绝对值-单分支if

成绩: 5 / 折扣: 0.8
从键盘输入一个整数，输出其绝对值。

要求用单分支if实现。*/
#include<stdio.h>
int main()
{    
  int m,n;
  scanf("%d\n",&m);
  n=-m;
  if(m>=0)
     {printf("%d\n",m);}
  else
     {printf("%d\n",n);} 
  return 0;
}