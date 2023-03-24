//计算区间[m,n)内的自然数的和并输出。m、n从键盘输入。
#include<stdio.h>
int main()
{ 
int m,n,i,sum=0;
scanf("%d %d\n",&m,&n);
for(i=m;i<n;i++)
sum=sum+i;
printf("%d\n",sum);
}

