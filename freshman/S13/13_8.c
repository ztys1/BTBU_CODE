/*
从键盘输入n 个整数(n也从键盘输入，n不超过50)并保存到数组，
然后将这些整数进行升序排序，输出排序后的数列。
*/

void sort_list(int *p, int n)
{
    int i,j;
    int temp;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(p[j] < p[i])
                {
                    temp = p[j];
                    p[j] = p[i];
                    p[i] = temp;
                }
}

//后置代码
#include<stdio.h>   
int main()  
{  
    int i,list[50],n,*p=list;  
    scanf("%d",&n);/*输入实际个数*/  
    for(i=0;i<n;i++)/*输入数组元素*/  
       scanf("%d",p+i);  
  
        sort_list(p,n);//排序  
  
        for(i=0;i<n; i++)//输出排好序的数组元素  
           if(i<n-1)  
              printf("%d ",p[i]); //p[i]等价于*(p+i)  
           else//n-1，即最后一个元素  
              printf("%d\n",p[i]);  
        return 0;  
}  