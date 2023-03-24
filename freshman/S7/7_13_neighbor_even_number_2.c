/*7.13 相邻偶数

成绩: 5 / 折扣: 0.8
从键盘上输入10个数到数组a，当两偶数相邻时，将后者除2。输出处理后的数组a。*/


#include <stdio.h>
int main()
{
    int i;
    int a[10];   
    

    //输入
    for(i=0; i<10; i++)
    {
        scanf("%d ",&a[i]);
        scanf("\n");
    }


    //判断
    for(i=0; i<9; i++)/*此处要9，不能要10，否则会报错
main.c:25:Bounds error: array reference (10) outside bounds of the array.
main.c:25:  Pointer value: 0xbfa4af98
main.c:25:  Object `a':
main.c:25:    Address in memory:    0xbfa4af70 .. 0xbfa4af97
main.c:25:    Size:                 40 bytes
main.c:25:    Element size:         4 bytes
main.c:25:    Number of elements:   10
main.c:25:    Created at:           main.c, line 11
main.c:25:    Storage class:        stack*/
    {
        if(((a[i]%2)==0)&&((a[i+1]%2)==0))
        {
            a[i+1]=(a[i+1])/2;
        }
    }
    
    //输出
    for(i=0; i<10; i++)
    {
        printf("%d,",a[i]);
    }
    printf("\n");
    
    return 0;
}