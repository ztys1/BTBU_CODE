/*
11.17 寻找n在数组中的位置-函数

成绩: 5 / 折扣: 0.8
已知数组a[]={1,3,5,9,11,13,15,19,23,25}。从键盘输入整数n，若n在数组a中，则输出n在数组中的位置（下标+1），若a数组中不存在n则输出没找到。要求通过函数调用实现。该函数声明为int find(int a[],int n);其中n为数组中数的个数。
预设代码

前置代码

view plainprint?
int find(int a[],int num,int n)  
{ int i;  
  for(i=0;i<num;i++)  
     if(a[i]==n) break;  
  return i;               
}  
*/