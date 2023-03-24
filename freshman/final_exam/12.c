/*
12 平均成绩计算

成绩: 10 / 折扣: 1
从键盘输入若干学生的成绩，碰到输入非法成绩（输入负数或者超过100的数）时结束。要求计算平均成绩并输出。
*/
#include<stdio.h>  
int main()  
{  
 int a[100],i,c,sum=0;  
 float d;
 for(i=0;i<100;i++)  
    {
        scanf("%d",&a[i]);
        if(a[i]>100||a[i]<0)
        {
            a[i]=0;
            c=i-1;
            break;}
    }
 for(i=0;i<c;i++)  
    {
        sum+=a[i];
    }
d=(float)(sum/c);
printf("平均成绩=%.2f\n",d);
return 0;

}