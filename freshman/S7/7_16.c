/*7.16 矩阵最大值及位置

成绩: 5 / 折扣: 1
从键盘输入一个3×4的矩阵，要求编程求出其中最大值以及其所在的行号和列号。*/
#include <stdio.h>
int main()
{
    int a[3][4],i,j,max=0,row,colum;

    //输入
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
        scanf("\n");
    }
    
    //运算
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]>max)
            {
            max=a[i][j];
            row=i;
            colum=j;
            }
        }
        
    }
    

    //输出
    printf("max=%d\nrow=%d,colum=%d\n",max,row+1,colum+1);
    return 0;
}