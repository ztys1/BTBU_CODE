/*1.12 字母大写转小写

成绩: 5 / 折扣: 0.8
从键盘输入一个大写字母，要求输出其小写字母。
转换公式：小写字母=大写字母+32*/
#include <stdio.h>
int main()
{
     char c1,c2; 
     c1=getchar(); 
     c2=c1+32; 
     printf("%c\n",c2);
}
