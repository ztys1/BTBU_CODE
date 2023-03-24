/*2.4 两数降序排序-单分支if

成绩: 10 / 折扣: 0.8
从键盘输入两个实数，要求降序（按由大到小的顺序）排序输出(以2位小数形式)。

要求用单分支if实现。*/
#include<stdio.h>
int main()
{    
  float m,n;
  scanf("%f %f\n",&m,&n);
  if(m>=n)
     {printf("%.2f,%.2f\n",m,n);}
  else
     {printf("%.2f,%.2f\n",n,m);} 
  return 0;
}