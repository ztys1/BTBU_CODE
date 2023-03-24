/*7.15 矩阵求和

成绩: 5 / 折扣: 1
从键盘上分别输入3×3矩阵A和B，输出和矩阵C。*/
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    //输入
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&a[i][j]);
            
        }
        scanf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d ",&b[i][j]);
            
        }
        scanf("\n");
    }
    //运算

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //输出
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}