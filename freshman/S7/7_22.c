/*7.22 素数均值

成绩: 5 / 折扣: 0.8
输入一个正整数n，求[2,n]之间的素数均值。*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,j=0;
    int n=0;
    int a[100];
    int flag=0;
    float ave=0;
    int all=0;//定义初始化变量

    scanf("%d\n",&n);
    for(j=2;j<=n;j++)
    {
        for(i=2;i<=j-1;i++)//循环从2开始，到这个数的前一个数为止
        {
            if(j%i==0)//如果取余结果为0
            break;
        }
        if(i==j)
        {
            a[flag]=j;
            flag++;
        }
    }
    
    //求均值
    for(i=0;i<flag;i++)
    {
        all+=a[i];
    }
    ave=(float)all/flag;
    printf("%d个素数均值=%.2f\n",flag,ave);
    
    return 0;
}
