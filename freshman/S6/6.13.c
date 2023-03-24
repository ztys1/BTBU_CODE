/*成绩: 10 / 折扣: 0.8
统计100-200之间的素数的个数，并输出第10、20个素数是多少？
要求用数组法，即先将这些素数存放到数组中，再输出第10个、20个素数的值。
建议：素数判断最好通过函数调用（下一章讲）。*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    int n=0;
    int a[100];
    int flag=0;
    scanf("\n");
    for(i=101;i<=200;i+=2)
    {
	    int j=0;
	    for(j=2;j<=sqrt(i);j++)
	    {
	        if(i%j==0)
	        {
	            break;
	        }
        }
	    if(j>sqrt(i))
	    {
	        n++;
	        a[flag]=i;
            flag++;
	    }
        
    }
    printf("%d个\n",n);
    printf("%d,%d\n",a[9],a[19]);
    return 0;
}
