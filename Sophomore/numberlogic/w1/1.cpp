//https://zhidao.baidu.com/question/334398917747452645.html
#include<stdio.h>  
#include<string.h>
void main(){
long t1;
int i,n,t,t3;
char a[100];

printf("请输入字符:\n");
gets(a); 
/*输入n进制数存到数组a中*/
strupr(a); 
/*将a中的小写字母转换成大写字母*/
t3 = strlen(a); 

/*求出数组a的长度*/
t1 = 0;
/*为t1赋初值0*/

printf("请输入n(2or8or16):\n");
scanf("%d",&n); 
/*输入进制数*/
}