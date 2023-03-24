/*
从键盘上输入n个数（n也从键盘输入,n不大于100），
输出其中最大数以及最大数所在的位置。
*/

#include <stdio.h>
int main()
{
    int *max;
    int *p;
    int n;
    int a[100];
    scanf("%d",&n);
    for(p=a; p<a+n ;p++)
        scanf("%d",p);
    max = a;
    for(p=a; p<a+n; p++)
        if(*p > *max)
            max = p;

//后置代码
printf("max=%d,位于第%d个\n",*max,max-a+1);
//max与数组名a作指针运算获取位置信息
 return 0;  
}  