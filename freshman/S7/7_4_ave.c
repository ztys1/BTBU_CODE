/*
输入正整数n，再输入n个评委的打分成绩，
去掉一个最高分和一个最低分，计算其余n-2个成绩的平均分。
*/
#include <stdio.h>
int main()
{
    int i;
    int a[10];
    int n;
    int max,min;
    int sum = 0;
    float ave;
    scanf("%d",&n);
    for(i=0; i<n; i++)//输入数据
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    max = min = a[0];
    for(i=0; i<n; i++)
    {
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
    }
    //printf("%d,%d\n",max,min);
    ave = (float)(sum-max-min)/(n-2);
    printf("%.2f\n",ave);
    return 0;
}