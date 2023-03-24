/*键盘输入三个整数，找到其中最大者。

提示：在2.3题基础上继续比较。
*/
#include<stdio.h>
int main()
{    
  int m,n,p;
  scanf("%d %d %d\n",&m,&n,&p);
  if(m>=n&&m>=p)
     {printf("max=%d\n",m);}
  else if (n>=m&&n>=p)
  {
    printf("max=%d\n",n);
  }
  else
     {printf("max=%d\n",p);} 
  return 0;
}