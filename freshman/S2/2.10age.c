/*2.10 年龄判断

成绩: 10 / 折扣: 0.8
从键盘输入A、B两个人的年龄，输出年龄最大者是谁，如果年龄相等，则输出一样大。*/

#include<stdio.h>
int main()
{    
  int m,n;
  scanf("%d %d\n",&m,&n);
  if(m>n)
     {printf("A最大\n");}
  else if (m<n)
      {printf("B最大\n");}
  else
     {printf("一样大\n");}
  return 0;
}