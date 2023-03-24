/*
输入10个整数，输出其中最小的m个数(m>0)，m从键盘上输入。
*/

#include<stdio.h>   
void sort_list(int *p,int n);//排序函数声明  
int main()  
{  
  int i,list[10],m,*p=list;  
  for(i=0;i<10;i++)//输入数组元素  
  scanf("%d",p+i);  
  scanf("%d",&m);//输入m
/**********************/
//前置代码
    sort_list(p,m);
    return 0;
}

void sort_list(int *p, int n)
{
    int i,j;
    int temp;
    int count = 0;
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(p[j] <= p[i])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    while(count<n)
    {
        printf("%d,",p[count]);
        count++;
    }
    printf("\n");
}
