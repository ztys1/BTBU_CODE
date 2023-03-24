/*
从键盘输入一个整数，要求逆序输出该数。
提示：可以将整数当做字符串(字符串长度不超过10)接收，
然后反向输出字符数组元素即可。
字符串实际长度可以用strlen函数来计算。
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i,l;
    scanf("%s",&str);
    l = strlen(str);
    for(i=l-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}