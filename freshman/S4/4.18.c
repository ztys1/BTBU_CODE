/*要将 100 元人民币兑换成 5 元， 10 元和 20 元纸币，输出共有多少种兑换方法。*/
#include <stdio.h>
int main()
{
    
    int i,j,k,sum=0;
    int flag=0;
    scanf("\n");
    for(i=0;i<=100;i++)
    {
        for(j=0;j<=100;j++)
        {
            for(k=0;k<=100;k++)
            {
                sum=i*5+j*10+k*20;
                if(sum==100 )
                {
                    flag++;//说明有方案
                }    
            }
        }
    }
    printf("%d种\n",flag);
    
    return 0;
}