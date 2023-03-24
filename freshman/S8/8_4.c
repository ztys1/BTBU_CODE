/*
从键盘输入一个字符串(字符串长度不超过100)，
要求字符串中的大写字母转换为小写字母输出，其他字符不变。
转换公式：小写字母=大写字母+32
提示：可以用gets函数接受一个带空格的字符串。
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char str[100];
    gets(str);//输入字符串（可带空格）
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if((str[i]>='A')&&(str[i]<='Z'))
            str[i] += 32;
    }
    puts(str);
    return 0;
}