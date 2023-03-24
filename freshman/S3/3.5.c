//求 多项式：1 + 4 + 7 + 10 + 13 + 16 + …… 前 n 项和， n 从键盘输入 。
#include <stdio.h>
int main(){
    int a=1,n=0,sum=1,b=1;
    scanf("%d",&n);
    for(a=1; a<n; a++){
    b+=3;
    sum+=b;
    }
    printf("%d\n",sum);
    return 0;
}