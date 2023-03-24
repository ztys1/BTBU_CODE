/*8.5 凯撒加密

成绩: 10 / 折扣: 0.8
从键盘输入一个字符串(字符串长度不超过500)，使用凯撒加密算法加密（设移位数为3）。
建议采用字符数组保存字符串。注意：通过字符串统计个数时所用的循环结束条件是字符串结束标志'\0'
当然如果采用循环+变量的方式也可以，输入的字符串长度不一样，如何判断字符串输入结束？以换行表示字符串输入结束。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int i,l;
char s[500];
gets(s);
l = strlen(s);
for (i=0;i<l;i++)
{
    if(s[i]>='A' && s[i]<'Z')
        s[i] ='A' + (s[i]- 'A' +3)%26;
        //从'A'开始，算字符到’A”的距离 ，为保证X,Y,Z不超过Z，%26
    else if (s[i]>='a' && s[i]<'z')
        s[i] ='a'+ (s[i]-'a' +3)%26;
    else
        s[i] = s[i];
}

puts (s);
return 0;
}