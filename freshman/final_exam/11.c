/*
11 字符串分割

成绩: 10 / 折扣: 1

从键盘上输入一个字符串，在第一个空格处将字符串分割为2个子串。
预设代码

后置代码

view plainprint?
int main()  
{  
  
   char str[200];  
   char *p;  
   gets(str);  
   p=separationString(str);  
   puts(str);  
   puts(p);  
   return 0;  
}  
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i,l;
    gets(str);
    l = strlen(str);
    for(i=0; i<l; i++)//不能<=
    {
        if(str[i]==' ')
        str[i]='\n';
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
int main()  
{  
  
   char str[200];  
   char *p;  
   gets(str);  
   p=separationString(str);  
   puts(str);  
   puts(p);  
   return 0;  
}  