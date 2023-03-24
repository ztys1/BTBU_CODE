/*
测验2.4 分段函数

成绩: 25 / 折扣: 0.8
编写名为f的函数，功能是求分段函数

fd

预设代码

后置代码

view plainprint?
int main()                        
{     
      double x;     
      scanf("%lf",&x);     
      printf("%.3f\n",f(x));         
      return 0;                 
}  
*/
double f(double x)
{
   if (x<-10)
   {
      return 10;
   }
   if (x>=-10&&x<10)
   {
      return x+5;
   }   
   if (x>=10)
   {
      return x*x+x-2;
   }   
}
#include <stdio.h>  
// 
int main()                        
{     
      double x;     
      scanf("%lf",&x);     
      printf("%.3f\n",f(x));         
      return 0;                 
}  