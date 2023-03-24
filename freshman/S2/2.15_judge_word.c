
#include<stdio.h>
void main()
{
char c;
c=getchar();
if(c>=48&&c<=57)
printf("数字字符\n");
else
if(c>=65&&c<=90)
printf("大写字母\n");
else
if(c>=97&&c<=122)
printf("小写字母\n");
else
printf("其他字符\n");
}