/*从键盘上输入n个数（n也从键盘输入，n不大于10），置于数组中，交换数组第一个位置和最后一个位置上的数，输出交换后的数组。
提示：两数交换算法参考1.15题*/
#include <stdio.h>
int main()
{
    int n,i,a[10];
    int c=0;//空点
    scanf("%d\n",&n);//输入n
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    scanf("\n");
    c=a[0];
    a[0]=a[n-1];
    a[n-1]=c;

    for(i=0;i<n;i++)//输出
    {
        printf ("%d,",a[i]);
    }

    printf("\n");
    
    return 0;
}