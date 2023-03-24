/*从键盘依次输入10个整数，按输入顺序进行逆序输出。*/
#include <stdio.h>
int main()
{
    int a[10];
    int i;
    
    for (i = 0; i < 10; i++)
        scanf("%d ", &a[i]);
    for (i = 9; i >=0; i--)
        printf("%d,", a[i]);
    printf("\n");
    return 0;
}
