/*
11.11 组合数-递归函数

成绩: 10 / 折扣: 1
计算从n个人中选k个人组成委员会的不同组合并输出，n、k从键盘输入，满足0<=k<=n。
提示：（组合数的递归公式如图所示）
com
组合数的常用公式：C(n,k)=n!/[k!(n-k)!]    也可以转化为定义计算阶乘的递归函数。
*/
//https://wenku.baidu.com/view/153752f0c2c708a1284ac850ad02de80d4d80629.html?_wkts_=1669904379345&bdQuery=%E7%BB%84%E5%90%88%E6%95%B0%E9%80%92%E5%BD%92%E7%AE%97%E6%B3%95c%E8%AF%AD%E8%A8%80
#include <stdio.h>

int seek(int n, int k)
{
	if(k>n)
		return 0;
	else if(k == n || k == 0)
		return 1;
	else
		return seek(n-1,k-1) + seek(n-1, k);
}


int main()
{
	
	int  n,k;
	scanf("%d %d\n", &n, &k);	
	printf("%d\n", seek(n, k));

}

