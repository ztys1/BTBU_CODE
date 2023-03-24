/*从键盘输入一个大写字母，要求输出其小写字母。
转换公式：小写字母=大写字母+32*/
#include <stdio.h>
int main()
{
    char a;
    scanf("%c\n",&a);
    printf("%c\n",a+32);
    return 0;
}