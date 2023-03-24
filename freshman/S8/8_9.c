/*8.9 字母频度

成绩: 10 / 折扣: 0.8
从键盘输入一个字符串（不超过100个字符）和某个字母，要求统计字符串中该字母的个数。英文字母区分大小写。*/
#include <stdio.h>
int main()
{
    int i, count=0; 
    char str [100],letter;
    gets(str);
    scanf("%c\n",&letter);
    for (i=0; str[i]!= '\0'; i++)
    {
        if(str[i]==letter)
        count++;
    }
    printf("%d次\n",count);//需要加上最厅一个单词
    
    return 0;
}