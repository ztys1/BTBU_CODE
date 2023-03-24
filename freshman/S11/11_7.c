/*
11.7 最大公约数

成绩: 5 / 折扣: 1
从键盘输入两个数，求两个数的最大公约数。
本题使用穷举法。
*/
//https://www.zhihu.com/question/263544878/answer/2162145221
#include<stdio.h>//头文件 
int main()//主函数 
{ 
int m, n, num1, num2, temp;//定义整型变量 

scanf("%d %d\n", &num1, &num2);//键盘输入两个数 
m=num1; //赋值 
n=num2; //赋值 
while(num2!=0) // 余数不为0，继续相除，直到余数为0 
{ 
temp=num1%num2; 
num1=num2; 
num2=temp;
}
printf("%d\n", num1);//输出最大公约数 

}