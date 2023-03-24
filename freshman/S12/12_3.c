/*
从键盘输入两个实数，要求通过指针实现降序（按由大到小的顺序）
排序输出(以2位小数形式)。
*/
#include  <stdio.h>     
int main()     
{
    float a,b,*pa=&a,*pb=&b;
    scanf("%f%f",pa,pb);  
    scanf("",&a,&b);
//前置代码
    if(*pa>*pb)
        printf("%.2f,%.2f\n",*pa,*pb);
    else
        printf("%.2f,%.2f\n",*pb,*pa);
    return 0;
}