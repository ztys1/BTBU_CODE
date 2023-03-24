/*m个人看马戏表演，门票共120 元，若男人每人5 元，女人每人2 元，小孩每人0.5元。
m从键盘输入，编程输出满足要求的全部方案，无法满足要求，输出“No Output”。*/
#include <stdio.h>
int main()
{
    int m;//总人数
    int i,j,k;
    int flag=0;
    float sum=0;
    const int man = 5;
    const int woman = 2;
    const float child = 0.5;
    scanf("%d\n",&m);
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=m;j++)
        {
            for(k=0;k<=m;k++)
            {
                sum=i*man+j*woman+k*child;
                if(sum==120 && (i+j+k)==m)
                {
                    printf("%d,%d,%d\n",i,j,k);
                    flag=1;//说明有方案
                }    
            }
        }
    }
    if(flag==0)
    {
        printf("No Output\n");
    }
    return 0;
}