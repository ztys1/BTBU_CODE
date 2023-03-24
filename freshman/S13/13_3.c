/*
从键盘依次输入10个整数，
按输入顺序，输出下标为偶数的数组元素。
要求用指针法访问数组元素。
*/

#include<stdio.h>  
int main()  
{  
 int a[10],*p=a,i;  
 for(i=0;i<10;i++)  
     scanf("%d",p+i);//p+i等价于&a[i]  
//前置代码
    for(i=0; i<10; i+=2)
        printf("%d,",*(p+i));
    printf("\n");
    return 0;
}