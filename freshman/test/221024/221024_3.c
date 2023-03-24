/*求 多项式：1/1 - 1/4 + 1/7 - 1/10 + 1/13 - 1/16 + ……前 n 项和， n 从键盘输入 。
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);

    float i=0.0;
    float sum=0.0,b=0.0;
    float flag=-1;
    for(i=1;i<=n;i++)
    {
        b=1/(3*i-2);
        flag*=(-1);
        sum+=(b*flag);
    }
    printf("%.5f\n",sum);
    return 0;
}