/*
8.12 月的英文写法-二维字符数组
成绩: 5 / 折扣: 1
从键盘上输入一个数字，输入对应月的英文单词，当数字不在1-12之间时，输出“输入错误”。
与2.20题的方法不同，本题要求用二维字符数组实现，即事先将每月的写法存入二维字符数组。
预设代码

前置代码

view plainprint?
#include <stdio.h>  
int main()  
{  
    char s[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"}; */

#include <stdio.h>  
int main()  
{   
    
    char s[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    
    int a;
    scanf("%d\n",&a);
    if(a>=1&&a<=12)
    {
        printf("%s\n",s[a-1]);
    }
    else
    {
        printf("输入错误\n");
    }
    return 0;
}