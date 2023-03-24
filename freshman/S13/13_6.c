/*
从键盘上输入n个数,n也从键盘输入，输出最大值的位置。
要求通过函数调用实现。该函数声明为int max(int *p,int n);
其中n为数组中数的个数。
*/
int max(int *p,int n)
{
    int i,k=0;
    for(i=0; i<n; i++)
        if(*(p+i) > *(p+k))
            k = i;
    return k;
}

//后置代码
#include <stdio.h>  
int main()  
{  
   int a[100],*p,n;  
   scanf("%d",&n);  
   for(p=a;p<a+n;p++)  
      scanf("%d",p);  
   int k=max(a,n);  
   printf("max=%d,位于第%d个\n",a[k],k+1);    
   return 0;   
}  