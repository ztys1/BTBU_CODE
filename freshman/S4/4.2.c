/*会议室里，单人椅有m把，双人椅有n把，m和n从键盘输入，一共能坐多少人？
*/
#include <stdio.h>
int main()
{
    int m=0,n=0;
    scanf("%d %d\n",&m,&n);
    printf("%d人\n",m+2*n);
    return 0;
}