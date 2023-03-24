/*将区间[m,n)内的不能被3整除的数输出，每行输出3项，最后一行输出时若不足3项也按一行输出。m、n从键盘输入。*/
#include <stdio.h>

int main()
{
    int m,n;
    int i;
    int count=0;
  
    scanf("%d %d",&m, &n);
    for(i=m;i<n;i++)
    {
        if(i%3 !=0)//不能被3整除
        {
            count++;
            printf("%d,",i);
        
            if (count%3 == 0)
            {
                printf("\n");/* code */
            
            }
            
        }
    }
    if(count%3!=0)
    printf("\n");
    return 0;
}
