/*根据输入的雾霾PM指数值，判断空气质量，若PM<100 为“较好”；[100-150]为“轻度”；(150-200]为“中度”，大于200为“重度”。
*/
#include <stdio.h>
int main()
{
    int p;
    scanf("%d\n",&p);
    if (p<100)
        printf("较好\n");
    else if(100<=p&&p<=150)
        printf("轻度\n");
    else if(150<p&&p<=200)
        printf("中度\n");
    else if(p>200)
        printf("重度\n");
    
    return 0;
}