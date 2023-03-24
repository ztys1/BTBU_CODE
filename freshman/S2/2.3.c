/*2.3 两数求最大值-单分支if

成绩: 5 / 折扣: 0.8
从键盘输入两个整数，输出两数的最大值。

要求用单分支if实现。
*/
#include<stdio.h>
int main()
{    
  int m,n;
  scanf("%d %d\n",&m,&n);
  if(m>=n)
     {printf("%d\n",m);}
  else
     {printf("%d\n",n);} 
  return 0;
}