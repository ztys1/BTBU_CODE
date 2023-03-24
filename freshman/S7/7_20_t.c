/*
7.20 数字出现的次数（难）

成绩: 5 / 折扣: 0.8
从键盘上输入一个正整数n和m（范围是0到9），输出从1到n这n个整数中m出现的次数。
例如输入n为12，m为1，从1到12这些整数中包含1的数字有1，10，11和12，1一共出现了5次。（google面试题）。
提示：利用/ 和 %运算符，逐个判断各位。
*/
#include <stdio.h>
int main()
{

    int n,m;
    int i;
    int count= 0;
    scanf("%d,%d\n", &n,&m);
    int f;//存储待判断的数
    for(i=1;i<=n;i++)
    {
        f=i;
        while(f>0)
        {
            if(f%10==m)
                count++;
            f/=10;//去掉最低位
        }
    }
    printf("%d\n", count);
    return 0;
}
