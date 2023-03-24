/*将区间[m,n)内的不能被3整除的数输出。m、n从键盘输入。
提示：在3.13题基础上，将求和改为数的输出。*/
#include<stdio.h>
int main()
{ 
int m,n,i,sum=0;
scanf("%d %d\n",&m,&n);
for(i=m;i<n;i++)
{if(i%3!=0)
{sum=sum+i;
printf("%d,",i);}

}
printf("\n");
return 0;
}