
#include <stdio.h>

int main()
{
    int a,b;
    int *max=NULL;
    //定义一个指针变量max，并将其指向NULL;
    //指针变量使用之前必须初始化
    //int是指针变量的基类型，描述指针变量指向的数据类型
    //max是指针变量名
    //*max理解为指针变量的值，是一个地址，也就是该指针指向的变量的地址
    scanf("%d %d",&a,&b);
    if(a>b)
        max = &a;
    else    
        max = &b;

//后置代码
printf("%d\n",*max); //*是解引用符，代表指针指向变量的数据
 return 0;  
}  