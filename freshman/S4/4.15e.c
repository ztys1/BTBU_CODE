/*算法：鸡用c表示，兔子用r表示
step1: c从0-m重复执行一下操作
	r = m - c;
	如果 2*c+r*4 == n 跳出循环
	c++
step2: 如果提前跳出循环，则输出鸡和兔子的个数
否则输出“误解”。*/



#include <stdio.h>
int main(){
	int c,r;//c为鸡的数量，r为兔子的数量
	int m,n;//m只头，n只脚
	
	scanf("%d %d\n",&m,&n);
	for(c=0;c<=m;c++){
		r = m-c;
		if(2*c+4*r==n){
			break;
		}
	}
	if(c<=m){
		printf("鸡=%d,兔=%d\n",c,r);
	}else{
		printf("无此结果\n");
	}
	return 0;
} 
