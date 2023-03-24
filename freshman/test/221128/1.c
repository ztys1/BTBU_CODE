/*测验2.1 数组处理

成绩: 25 / 折扣: 0.8
从键盘输入n个非0整数存入一维数组，n不超过100，将数组中的所有正数放在数组的前面，负数放在数组的后面。并输出排好的数组。*/
#include<stdio.h>  
int main()  
{  
    int a[100],b[100],c[100];
    
    int i,n;
    int f=0+1,k=0,q=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    //
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[k]=a[i];
            k++;
            f++;
        }
        else
        {
            c[q]=a[i];
            q++;
        }
    }
    for(i=0;i<f;i++)
    {
        a[i]=b[i];
    }
    for(i=f-1;i<n;i++)
    {
        a[i]=c[i-f+1];
    }
    //
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}