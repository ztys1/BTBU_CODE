/*7.19 最小数的下标

成绩: 5 / 折扣: 0.8
键盘上输入 n 个数 至数组 a 中，找出其中最小数在数组中的下标。 n 从键盘输入。
预设代码

前置代码

view plainprint?
# include <stdio.h>  
int main ()  
{  
  int a[100],i,min,n;//min存放最小值的下标，n存放数据个数   
  scanf("%d",&n);   
  for(i=0;i<n;i++)  
    scanf("%d",&a[i]);//输入n个数存放到a数组中  */
# include <stdio.h>  
int main ()  
{  
  int a[100],i,min,n;//min存放最小值的下标，n存放数据个数   
  scanf("%d",&n);   
  for(i=0;i<=n;i++)  
    scanf("%d",&a[i]);//输入n个数存放到a数组中  */
    
    int b=a[0];//如果是b=0,可能因为0比所有数小，出bug
    //运算
    for(i=0;i<n;i++)
    {
      if(b>=a[i])//必须加等号，如果第一个数最小，有bug，直接print min
      {
        min=i;
        b=a[i];
        
      }
    }
    //输出
    printf("%d\n",min);
    return 0;
}