//https://blog.csdn.net/lbcbjtlhmjq/article/details/128611227
#include<stdio.h>
void dectobin(int n)//十进制转二进制方法：除2取余，逆序排列
{
    int a[100]={ };
    int i=0;
    for (n;n>0;i++)
    {
        a[i] = n % 2;//对2取余
        n = n / 2;//除2
    }
    i--;//计数器更新次数比分离后所得数的数量多1，即多执行了一次i++，故需要i--
    for(i;i>=0;i--)//逆序排列输出
        printf("%d", a[i]);
}
int main()
{
    int n;
    printf("输入十进制数：");
    scanf("%d", &n);
    printf("对应的二进制数为：");
    dectobin(n);
    return 0;
}
