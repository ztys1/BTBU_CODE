/*设一个山洞中有10个箱子，每个箱子中放着一块重量不等的宝石。进入山洞后，最多只能拿一块宝石。问题：如何实现收获最大化？*/
#include <stdio.h>
int main()
{
    int i=0,m=0,a=0;

    for(i=0;i<10;i++) 

    {
    scanf("%d",&m);
    if(m>=a)
    a=m;
    else a=a;
    }
   
    printf("max=%d\n",a);
    return 0;        

}
