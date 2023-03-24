/*从键盘上输入一个大于或等于2的正整数m,判断它是否是素数。m从键盘输入。
*/
#include <stdio.h>
int main()
{
    int a,i,flag=0;
    scanf("%d\n",&a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    printf("素数\n");
    else
    printf("不是素数\n");
    return 0;
}