/*7.14 矩阵转置

成绩: 5 / 折扣: 1
输入一个2行3列的矩阵，将其转置（将矩阵元素的行列位置互换），并输出转置后的矩阵。
例如：转置前矩阵a：
1 2 3
4 5 6
要求输出转置后矩阵b：
1 4
2 5
3 6*/
#include <stdio.h>
int main()
{
    int i,j;
    int a[2][3];
    int b[3][2];
    
    //输入
    for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
        {
            scanf("%d ",&a[j][i]);
            scanf("\n");
        }
    }

    //输出
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}