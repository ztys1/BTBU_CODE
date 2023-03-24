/*
从键盘输入n个整数(n也从键盘输入，n不超过50)并保存到数组，
然后将这些整数进行升序排序，输出排序后的数列。
*/

#include <stdio.h>
int main()
{
    int n;
    int i,j;
    int a[50];
    int temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)//交换法排序
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}