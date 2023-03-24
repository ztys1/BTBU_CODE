/*https://zhuanlan.zhihu.com/p/434069379*/
#include<stdio.h>//头文件
int main()//主函数
{
  int number,i;//定义变量
  scanf("%d\n",&number);//键盘输入需要判断的数
  for(i=2;i<=number-1;i++)//循环从2开始，到这个数的掐前一个数为止
  {
    if(number%i==0)//如果取余结果为0
    break;
  }
  if(i<number)
  {
    printf("不是素数\n",number);
  }
  else
  {
    printf("素数\n",number);
  }
  return 0; //函数返回值为0
}