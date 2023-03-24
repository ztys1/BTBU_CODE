/*设在一只笼子里关着鸡和兔子共m只，笼子中的脚数有n，求鸡和兔各有多少只？ m和n从键盘输入。
提示：穷举法。*/
#include <stdio.h>
int main()
{
    int m=0,n=0;
    int flag=0;//判断是否有结果
    int i=0;
    int b=0;
    scanf("%d %d\n",&m,&n);
    
    for(i=1;1<=m;i++)
    {
        b=4*i+2*(m-i);//兔子i，鸡m-i
        if (b==n)
        {
            flag=1;
            break;
        }
        
    }
    
    if (flag==1)
    printf("鸡=%d,兔=%d\n",m-i,i);
    else if(flag==0)   
    printf("无此结果\n");
    
    return 0;
}