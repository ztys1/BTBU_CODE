/*从键盘输入一个整数，输出其绝对值。要求用双分支if实现。
*/
#include<stdio.h>
int main()
{	
    float a,b,t;
    scanf("%f %f\n",&a,&b);
	if(a>=b)
		{
            t=a;
            a=b;
            b=t;}

    printf("%.2f,%.2f\n",b,a);
    return 0;
}




