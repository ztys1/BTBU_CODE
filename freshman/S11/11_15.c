/*
11.15 数组的均值-函数

成绩: 5 / 折扣: 0.8
从键盘上输入10个数,输出均值。
要求通过函数调用来实现。函数的声明为：float ave(int a[],int n);
其中n为数组中数的个数。
提示：此题可以看作6.2题的函数版
预设代码

前置代码

view plainprint?
float ave(int a[],int n)  
{  
    int i;  
    float s=0;  
    for(i=0;i<n;i++)  
        s=s+a[i];  
    return s/n;  
  
}  
*/