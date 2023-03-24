/*2.4 2.5 成绩通过判断

成绩: 5 / 折扣: 0.8
从键盘输入百分制成绩，如果大于等于60，则输出"Congratulation! Pass."否则输出"Sorry！Fail."*/
#include<stdio.h>
int main()
{    
  float m;
  scanf("%f\n",&m);
  if(m>=60)
     {printf("Congratulation! Pass.\n");}
  else
     {printf("Sorry！Fail.\n");} 
  return 0;
}