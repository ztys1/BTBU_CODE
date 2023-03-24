/*输入一个整数m（m>0）,求50到100之间所有能被m整除的数之和。
*/
#include<stdio.h>
int main()
{ 
int m,i,sum=0;
scanf("%d\n",&m);
for(i=50;i<=100;i++)
{
    if(i%m==0)
    {sum=sum+i;}
}
printf("%d\n",sum);
}