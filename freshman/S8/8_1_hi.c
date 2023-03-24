/*
要求从键盘输入任意姓名XXX(字符串长度不超过10)，
并根据所输出的姓名输出“Hi,XXX,how about you?”的问候语。
提示：使用字符数组进行字符串的整体输入输出。
*/
#include <stdio.h>
int main()
{
    char str[10];
    //scanf("%s",&str);
    gets(str);//替代方案
    printf("Hi,%s,how about you?\n",str);
    //puts(str);
    return 0;
}