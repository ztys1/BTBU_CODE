/*8.14 聪明猪（难）

成绩: 5 / 折扣: 0.8
聪明猪Tom及其家人和其他猪群居，面临凶恶屠户Thomas，Thomas有一个嗜好，他喜欢将群居的猪排成一行，首先将处于奇数位置的猪送到屠宰场，剩下的猪自然成为新的一行。
在新的一行中，再次将处于奇数位置的猪送到屠宰场，如此重复多次。从键盘上输入所有猪的个数m，Tom及家人的个数n，求解Tom及家人应该站的最佳位置，输出这些位置。

tips:本题目不考虑最后一轮不足n的情况。测试用例也没有测试这种边界。*/
#include <stdio.h>
int main()
{
    int m=0,n=0;
    int a[100],b[100];
    int flag=0,q=0;
    int i=0,j=0,k=0,l=0;
    //输入
    scanf("%d %d\n",&m,&n);
    q=m;
    //运算
    for(j=0;j<100;j++)
    {
        a[j]=0;
        b[j]=0;
    }

    for(j=0;j<m;j++)
    {
        a[j]=j+1;
    }

    for(i=0;i<q;i++ )
    {
        flag=0;
        for(j=0;j<q;j++)
        {
            if((j+1)%2==0)
            {
                b[flag]=a[j];
                flag++;
            }
        }
        for(k=0;k<flag;k++)
        {
            a[k]=b[k];
            b[k]=0;
        }
        for(l=m;l>=flag;l--)
        {
            a[l]=0;
        }        
        q=flag;
        if((flag/2)<n)
        break;
    }
    //输出
    for(j=0;j<n;j++)
    {printf("%d,",a[j]);}

    printf("\n");

    return 0;
}