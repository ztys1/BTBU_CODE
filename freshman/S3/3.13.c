/*计算区间[m,n)内的不能被3整除的数的和并输出。m、n从键盘输入。
提示：在3.3题基础上求和时加入不能被3整除的判断。*/
#include<stdio.h>
int main()
{ 
int m,n,i,sum=0;
scanf("%d %d\n",&m,&n);


for(i=m;i<n;i++){
    if(i%3!=0)
    {sum=sum+i;}
}
printf("%d\n",sum);
}