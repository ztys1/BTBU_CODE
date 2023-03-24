/*从键盘输入10个学生的成绩，要求统计及格人数并输出。
提示：在3.1题基础上，将求和变成统计个数*/
#include<stdio.h>

int main()

{

    int i=0,s=0,a=0;

    for(i=0;i<10;i++) 
    
    {
    
    scanf("%d",&s);
    
    if(s>=60)
    
    a++;
    
    }
    
    printf("及格人数=%d\n",a);
    return 0;
}
