/*8.7 字符串转整数

成绩: 5 / 折扣: 0.8
从键盘输入一个数字字符串（长度不超过10 ），转换成正整数，并乘2后输出。
提示：取数字字符转化为整数数字（-‘0’或-48）,然后组成新数。
预设代码

前置代码

view plainprint?
#include <stdio.h>  
int main()     
{     
 char s[10];  
 gets(s);  //接受一个字符串  */
#include <stdio.h>  
int main()     
{     
    char s[10];  
    gets(s);  //接受一个字符串
    
    int i; int n=0;
    for (i=0; s[i]!='\0'; i++)
        n = n*10 + s[i]-48;
    printf ("%d\n", n*2);

    return 0;
}