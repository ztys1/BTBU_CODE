#include <stdio.h>

int main()
{
    int a,b,c;
    int *max=NULL;//定义指针变量并指向NULL
    scanf("%d %d %d",&a,&b,&c);
    max = &a;
    if(b>*max)
        max = &b;
    if(c>*max)
        max = &c;

//后置代码
printf("max=%d\n",*max);  
 return 0;  
}  