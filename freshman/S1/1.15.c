/*1.15交换两个数

成绩: 5 / 折扣: 0.8
从键盘输入2个整数，交换二者的值，然后输出。*/
#include<stdio.h>
int main()
{    
  int a,b,c;
  scanf("%d %d\n",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("%d,%d\n",a,b);
  return 0;
}