/*7.13 相邻偶数

成绩: 5 / 折扣: 0.8
从键盘上输入10个数到数组a，当两偶数相邻时，将后者除2。输出处理后的数组a。*/


#include <stdio.h>
int main()
{
    int i,j;
    int a[10];   
    int u[10];
    

    //输入
    for(i=0; i<10; i++)//相同的数组a、u
    {
        scanf("%d",&a[i]);
        u[i]=a[i];
        scanf("\n");
    }
    

    //判断
    for(i=0; i<10; i++)
    {
        if(((a[i]%2)==0)&&((a[i+1]%2)==0))
        {
            u[i+1]=(a[i+1])/2;
            ;
            i+=2;
        }
    }
    
    //输出
    for(i=0; i<10; i++)
    {
        printf("%d,",u[i]);
    }
    printf("\n");
    return 0;
}