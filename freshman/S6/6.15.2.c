/*从键盘输入正整数M和N,999<M<N<10000 ,求区间[M,N]上的满足下面条件的四位数的个数并输出。
条件：四位数abcd的前二位ab与后两位cd满足ab:cd=1:3。
例如：1030，10:30=1:3。*/
#include <stdio.h>
int main()
{
    int m,n;
    int i;
    int a,b,c,d,e;
    int count=0;
    scanf("%d %d\n",&m,&n);
    for(i=m;i<=n;i++)
    {
        a=i/1000;
        b=(i%1000)/100;
        c=(i%100)/10;
        d=i%10;
        e=(c*10+d)/(a*10+b);
        if(e==3)
        count++;
        
        
    }
    printf("%d个\n",count);
    return 0;
}