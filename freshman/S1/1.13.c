/*1.13 打谷场面积大了多少

成绩: 5 / 折扣: 0.8
假设有一块正方形的打谷场，边长m米，m从键盘输入，如果它的周长增加24米，这个打谷场的面积比原来大多少平方米？*/
#include<stdio.h>
int main()
{    
  float m,b,c,d;
  scanf("%f\n",&m);
  c=4*m;
  b=(c+24)/4;
  d=b*b-m*m;
  printf("%.0f\n",d);
  return 0;
}
