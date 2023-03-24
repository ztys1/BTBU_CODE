/*从键盘输入10个数，输出负数。*/
#include<stdio.h>

int main()

{

    int i=0,s=0;

    for(i=0;i<10;i++) 
    
    {
    
    scanf("%d",&s);
    
    if(s<=0)
    
    printf("%d,",s);
    
    }
    printf("\n");
    
    return 0;
}
