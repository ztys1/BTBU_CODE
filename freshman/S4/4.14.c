/*输入一个正整数n，编程输出由n行n列方阵上由星号组成的直角三角形：
比如输入6
*
**
***
****
*****
******
i表示行，j表示列。每行输出的星号个数与行i有关。*/
#include <stdio.h>
int main()
{
    int i,j,m;
    int n=0;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        m--;
        for(j=1;j<=n-m;j++)
        {
            printf("%s","*");
            
        }   
        printf("\n"); 
        
    
    }
    return 0;
}