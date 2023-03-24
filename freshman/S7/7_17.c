/* 
7.17 图案输出 
 
成绩: 5 / 折扣: 0.8 
输入一个正整数n和一个字符，编程输出由n行n列方阵上由该字符组成的直角三角形： 
比如输入6* 
输出 
****** 
***** 
**** 
*** 
** 
* 
*/  
#include <stdio.h>  
int main()  
{  
    //定义变量  
    int n;  
    char c;   
    int i,j;  
     
    //输入  
    scanf("%d%c\n",&n,&c);  
     
    //运算  
  
    //输出  
    for(i=0;i<n;i++)  
    {  
          
        
        for(j=1;j<=i;j++)  
        {  
            printf(" ");  
        }     
        for(j=1;j<=n-i;j++)  
        {  
            printf("%c",c);  
        }     
        printf("\n");  
    }  
  
    return 0;  
} 