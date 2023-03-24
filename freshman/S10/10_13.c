/*
10.13 分段函数3-普通函数

成绩: 5 / 折扣: 0.8
从键盘上输入x值，输出相应的函数值。

此题是5.22题的函数版
预设代码

后置代码

view plainprint?
#include <stdio.h>    
int main()        
{  int x;       
   scanf("%d",&x);        
   printf("%.2f\n",fd(x));        
   return 0;  
}  
*/

float fd(float x)
{
   if (x<-10)
   {
      return 5*x*x;
   }
   if (x>=-10&&x<=20)
   {
      return 1+x*x;
   }   
   if (x>20)
   {
      return 3*x+8;
   }   
}

/**********/
#include <stdio.h>    
int main()        
{  int x;       
   scanf("%d",&x);        
   printf("%.2f\n",fd(x));        
   return 0;  
}  