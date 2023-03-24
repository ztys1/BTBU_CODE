/*输入学生成绩并判断其考试成绩的状态，>=90分为“优秀”，[80,89]为“良好”，[60,79]分为“通过”，<60分为“不通过”。
*/
#include <stdio.h>
int main()
{
    int p;
    scanf("%d\n",&p);
    if (p<60)
        printf("不通过\n");
    else if(60<=p&&p<=79)
        printf("通过\n");
    else if(80<p&&p<=89)
        printf("良好\n");
    else if(p>=90)
        printf("优秀\n");
    
    return 0;
}