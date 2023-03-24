/*2.1船够坐吗

成绩: 5 / 折扣: 0.8
班级春游，有40人要过河，租m条小船（每条小船限乘4人）和n条大船（每条大船限乘6人），m和n从键盘输入，请输出够坐还是不够坐?*/
#include<stdio.h>
int main()
{    
  int m,n,b;
  scanf("%d %d\n",&m,&n);
  b=4*m+6*n;
  if(b>=40)
     {printf("够坐\n");}
  else
     {printf("不够坐\n");} 
  return 0;
}