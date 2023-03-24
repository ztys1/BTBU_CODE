/*
已知数组a[]={1,3,5,9,11,13,15,19,23,25}。
从键盘输入整数n，若n在数组a中，
则输出n在数组中的位置（下标+1），
若a数组中不存在n则输出没找到。
*/
#include <stdio.h>
int main()
{
    int a[]={1,3,5,9,11,13,15,19,23,25};//存储数组
    int n;
    int i;
    int flag = 0;
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(a[i]==n)
        {
            flag = 1;
            printf("%d\n",i+1);
        }
    }
    if(flag==0)
        printf("没找到\n");
    return 0;
}