/*从键盘输入一个整数，输出其绝对值。要求用双分支if实现。
*/
#include<stdio.h>
int main()
{	
    int a,b;
    scanf("%d\n",&a);
    b=-a;
	if(a>=0)
		printf("%d\n",a);
	else
		printf("%d\n",b);
    return 0;
}

