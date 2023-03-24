//计算区间[m,n)内的偶数的和并输出。m、n从键盘输入。
#include<stdio.h>
int main()
{ 
int m,n,i,sum=0;
scanf("%d %d\n",&m,&n);
if(m>n)
{scanf("%d%d",&m,&n);}
for(i=m;i<n;i++)
if(i%2==0){sum=sum+i;}
printf("%d\n",sum);
return 0;
}