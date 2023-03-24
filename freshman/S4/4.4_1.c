/*根据输入的雾霾PM指数值，判断空气质量，若PM<100 为“较好”；[100-150]为“轻度”；(150-200]为“中度”，大于200为“重度”。
*/
#include <stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    switch (p)
    {
    case p<100:
        printf("较好");
        break;
    case 100<=p<=150:
        printf("轻度");
        break;
    case 150<p<=200:
        printf("中度");
        break;
    default:printf("重度");
        break;
    }
    return 0;
}