/*7.7 仨数之积

成绩: 5 / 折扣: 0.8
将n拆成3个正整数a,b,c,即a,b,c之和为n，若abc的积最大，则输出a,b,c。n从键盘输入。
本题用循环即可，注意边界条件
https://zhidao.baidu.com/question/366071979176763972.html
*/
#include <stdio.h>
int main()
{
int a,b,c,d,e,f,n,s=1;
scanf("%d",&n);
for(a=1;a<=n-4;a++)
for(b=a;b<=n-3;b++)//确实，b>=a
for(c=b;c<=n-2;c++)
if(a+b+c==n)
{
if(s<a*b*c)
{
s=a*b*c;
d=a;e=b;f=c;
}
}
printf("%d,%d,%d\n",d,e,f);
}