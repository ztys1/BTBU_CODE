/*
11.10 年龄计算-递归函数

成绩: 5 / 折扣: 1
设有n个人坐在一起，问第n个人多少岁？他说比第n-1个人大2岁。问第n-1个人岁数，他说比第n-2个人大2岁。问第n-2个人，又说比第n-3个人大2岁......问第2个人，说比第1个人大2岁。最后问第１个人，他说是10岁。请问第n个人多大。n从键盘输入。

提示：用递归函数实现。年龄计算函数的声明为：int age(int n);

（年龄计算的递归公式）
age ( n ) = 10                  (n=1)

age ( n ) =age( n-1 ) +2    (n>1)
//https://zhuanlan.zhihu.com/p/430906924
*/
#include <stdio.h>

int age(int n);
int main(void)
{
	int a = 0,n = 0;
    scanf("%d \n",&n);//键盘输入两个整数  
	a  = age(n);
	printf("第%d个人%d岁\n",n,a);
	return 0;
}
int age(int n)
{
	if(n==1)
	{
		return 10;
	}
	else
	{
		return (age(n-1)+2);
	}
}


