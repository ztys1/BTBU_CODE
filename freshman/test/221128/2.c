/*
测验2.2 二维数组

成绩: 25 / 折扣: 0.8
输入一个5*5的二维数组，求其次对角线元素和。
*/

#include <stdio.h>
int main()
{
int a[5][5],i,j,s=0;
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
int p=4;
for(i=0;i<5;i++)
{
    s+=a[i][p];
    p--;
}

printf("%d\n",s);
}

//https://blog.csdn.net/m0_62282398/article/details/121274600