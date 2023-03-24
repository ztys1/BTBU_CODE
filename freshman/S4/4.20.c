/*统计100-200间素数个数*/
#include<stdio.h>//头文件
int main()//主函数
{
  scanf("\n");
  int i,a,num=0;//定义变量
  int flag=0;
  for(i=100;i<=200;i++)//循环从100开始，到200为止
  {
    
    for(a=2;a<=i-1;a++)//循环从2开始，到这个数的掐前一个数为止
       {
    if(i%a!=0)//如果取余结果不为0
    flag=1;
       }
    
    if (flag==1)
    {
        flag=0;
        /* code */
    }
    
    else
        num++;
        /* code */
    
    
    
  }
  printf("%d\n",num);
  return 0; //函数返回值为0
}