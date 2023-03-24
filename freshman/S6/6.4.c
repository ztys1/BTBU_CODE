/*从键盘上输入n个数（n也从键盘输入），输出其中最大数。
注意：虽然采用4.2题的方法可以实现n个数的最大数的输出，但是本题要求用数组实现。
注意测试系统有前置代码，只需要提交除前置代码外的代码
所谓带预设代码的题目，就是预设代码+提交代码构成一个完成的程序。如果预设代码是前置的，则提交的代码在预设代码之后，如果预设代码是后置的，则提交的代码在预设代码之前，如果预设代码有前置也有后置，则提交的代码在预设代码的中间。所以提交代码时不要重复提交预设代码，只交补充的代码即可。
预设代码

前置代码

view plainprint?
#include<stdio.h>  
int main()  
{  
 int a[100],i,max,n;//max记录最大数的值  
 scanf("%d",&n);  
 for(i=0;i<n;i++)/*输入n个数并保存到数组a
     scanf("%d",&a[i]); */
#include<stdio.h>  
int main()  
{  
 int a[100],i,max,n;//max记录最大数的值  
 scanf("%d\n",&n);  
 for(i=0;i<n;i++)  
    scanf("%d ",&a[i]);  
    
	max=0;
	int b;
	for(i=0;i<=n;i++)
	{
		
		if(a[i]>=max) 
		
		{max=a[i];
		b=i+1;
		}
	}
	printf("max=%d,位于第%d个\n",max,b);
	return 0;
 } 