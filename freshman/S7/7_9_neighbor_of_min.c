/*
7.9 最小数的邻居

成绩: 5 / 折扣: 0.8
从键盘上输入10个数，找到最小数，输出与其相邻的数。

*/
#include <stdio.h>
int main()
{
    int i;
    int a[10];
    int min;
    
    int loc_min;
    for(i=0; i<10; i++)//读入数组
    {
        scanf("%d ",&a[i]);
        
    }
    min = a[0];
    for(i=0; i<10; i++)//找出最小值的位置
    {
        
        if(min >= a[i])
        {
            min=a[i];
            loc_min = i;
        }

    }
    
    if(loc_min==9)
    printf("%d,%d\n",a[8],a[0]);
    else if(loc_min==0)
    printf("%d,%d\n",a[9],a[1]);
    else 
    printf("%d,%d\n",a[loc_min-1],a[loc_min+1]);

    return 0;
}