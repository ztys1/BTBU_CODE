/*从键盘输入一个正整数，判断是奇数还是偶数。
*/
#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d\n",&a);
    if(a%2==0)
    {
        printf("偶数\n");
    }
    else
    {
        printf("奇数\n");
    }
    return 0;

}