/*8.11 回文数

成绩: 10 / 折扣: 0.8
判断是否是回文数，如121、12321等。要求用字符串（长度不超过100）来实现。
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int l,a,i;
    char s[100];
    gets(s);
    l = strlen(s);
    a=l/2;
    int flag=1;
    for(i=1;i<=a;i++)
    {
        if(s[i-1]!=s[l-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("是\n");
    if(flag==0)
    printf("不是\n");

    return 0;
}