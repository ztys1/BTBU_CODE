/*7.10 补集

成绩: 5 / 折扣: 0.8
已知有序集合A、B分别包含10个元素，A，B的元素从键盘上输入，输出补集A-B（其元素属于A，但不属于 B）。
提示：建议用一个数组c存放补集。如果能定义一个查找函数，将会使得代码的结构更清晰。*/
#include <stdio.h>
int main()
{
    int i,j;
    int a[10];
    int b[10];
    int u[10];
    int e=0;//存放u的元素数
    

    //输入
    for(i=0; i<10; i++)//输入a
    {
        scanf("%d",&a[i]);
        scanf("\n");
    }
    for(i=0; i<10; i++) //输入b
    {
        scanf("%d",&b[i]);
        scanf("\n");
    }    

    //判断
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
            {
            if(a[i]==b[j])
            {
                break;
            }
            if(j==9)
            {
                u[e]=a[i];
                e++;
                break;
            }
            }
            
    }
    
    
    
    //输出
    for(i=0; i<e; i++)
    {
        printf("%d,",u[i]);
    }
    printf("\n");
    return 0;
}