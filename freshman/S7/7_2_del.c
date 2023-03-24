/*
已知数组a[]={61,4,26,8,22,35,7,89,45,1}。
从键盘输入整数n，若n在数组a中，则删除n，
并输出删除后的数组元素。
若a数组中不存在n则输出不能删除。
*/
#include <stdio.h>
int main()
{
    int a[]={61,4,26,8,22,35,7,89,45,1};
    int i,j,k;
    int n;
    int flag = 0;
    int loc;
    scanf("%d",&n);
    for(i=0; i<10; i++)//确定整数n是否在数组中，同时记录位置
    {
        if(a[i]==n)
        {
            flag = 1;//如果n在数组a中，flag置1
            loc = i;//记录n在a中的位置
        }
    }
    if(flag==0)
    {
        printf("不能删除\n");
    }
    else
    {
        for(k=loc; k<9; k++)//loc后的数据往前挪一位
        {
            a[k] = a[k+1];
            //
        }
        for(j=0; j<9; j++)//输出数组
        {
            printf("%d,",a[j]);
        }
        printf("\n");
    }
    return 0;
}
