/*
键盘上输入10个数，输出其方差（保留2位小数）。
方差是各个数据分别与其平均数之差的平方的和的平均数。
1）要求各个数据的平均数计算通过函数调用来实现。
函数的声明为：float ave(int a[],int n);其中n为数组中数的个数。
2）要求各个数据的方差计算通过函数调用来实现。
函数的声明为：float variance(int a[],int n);其中n为数组中数的个数，计算均值通过嵌套调用ave函数来实现。
*/
#include <stdio.h>    
float variance(int a[],int n);//计算方差的函数声明  
float ave(int a[],int n);//计算均值的函数声明  
int main()    
{    
 int a[10],i=0;    
 for(i=0;i<10;i++) //输入数组a  
   scanf("%d",&a[i]);    
 printf("%.2f\n",variance(a,10));//调用variance函数计算方差    
 return 0;  
}  
//前置代码

float ave(int a[], int n)
{
    int i;
    float sum=0.0;
    for(i=0; i<n; i++)
    {
        sum += a[i];
    } 
    return sum/n;
}

float variance(int a[], int n)
{
    float a_var;
    float sum=0.0;
    int i;
    a_var = ave(a,n);
    for(i=0; i<n; i++)
    {
        sum += (a[i]-a_var)*(a[i]-a_var);
    }
    return sum/n;
}
