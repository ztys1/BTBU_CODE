/*2.10 年龄判断

成绩: 10 / 折扣: 0.8
从键盘输入A、B两个人的年龄，输出年龄最大者是谁，如果年龄相等，则输出一样大。*/

#include<stdio.h>
int main()
{    
  int m;
  scanf("%d\n",&m);
  if(m>100)
     {printf("气态\n");}
  else if(m<0)
      {printf("固态\n");}
  else
     {printf("液态\n");}
  return 0;
}