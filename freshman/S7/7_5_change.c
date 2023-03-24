/*
从键盘依次输入10个整数，将
数组中最大值所在的元素与最后一个元素交换，
将数组中最小值所在的元素与第一个元素交换，
然后输出交换后的数组。
*/
#include <stdio.h>
int main()
{
    int i;
    int a[10];
    int min,max;
    int temp;
    int loc_max,loc_min;
    for(i=0; i<10; i++)//读入数组
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    for(i=0; i<10; i++)//找出最小值和最大值的位置
    {
        if(max < a[i])
        {
            max = a[i];
            loc_max = i;
        }
        if(min > a[i])
        {
            min = a[i];
            loc_min = i;
        }
    }
    //最小值移到最前
    temp = a[loc_min];
    a[loc_min] = a[0];
    a[0] = temp;
    //最大值移到最后
    temp = a[loc_max];
    a[loc_max] = a[9];
    a[9] = temp;
    for(i=0; i<10; i++)//数组输出
    {
        printf("%d,",a[i]);
    }
    printf("\n");
    return 0;
}