/*
已知一个排好序的数组a[ ]={1,2,3,6,8,9,12,23,33}，
从键盘上输入一个数n，
若数组中已经存在n，则输出不能插入，
否则将n 插入到数组a中，要求插入n后的a数组元素依然有序，输出新序列。
*/
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 6, 8, 9, 12, 23, 33};
    int i,j;
    int n;
    int flag = 0;
    int loc;
    scanf("%d", &n);
    for (i = 0; i < 9; i++) //判断数组中是否存在n
    {
        if (a[i] == n)
        {
            flag = 1; 
        }
    }
    if (flag == 1) //存在
    {
        printf("不能插入\n");
    }
    else //不存在
    {
        for(i=0; i<10 ;i++)//寻找位置
        {
            if(a[i]>n)
            {
                loc = i;
                break;
            }
        }
        loc = i>9? i-1 : i;//防止越界
        i = 8;
        while (i >= loc) //后移
        {
            a[i + 1] = a[i];
            i--;
        }
        a[loc] = n;            //插入数
        for (j = 0; j < 10; j++) //输出
        {
            printf("%d,", a[j]);
        }
        printf("\n");
    }
    return 0;
}
