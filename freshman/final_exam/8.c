/*
8 输出最大数的位置

成绩: 5 / 折扣: 1
从键盘上输入n个数（n也从键盘输入,n不大于100），输出其中最大数以及最大数所在的位置。
预设代码

后置代码

view plainprint?
printf("max=%d,位于第%d个\n",*max,max-a+1);//max与数组名a作指针运算获取位置信息  
 return 0;  
}  
*/

#include <stdio.h>  
int main()  
{  
    int a[100],*max=NULL,i;  
    for(i=0;i<100;i++)
    {
        scanf("%d",a[i]);
    }
    //
    *max=a[1];
    for(i=0;i<100;i++)
    {
        if(a[i]<*max)
        {
            max=&a[i];
        }
    }
    ///
    printf("max=%d,位于第%d个\n",*max,max-a+1);//max与数组名a作指针运算获取位置信息  
    return 0;  
}  



