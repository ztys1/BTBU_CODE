/*求 多项式：1/1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +  ……前 n 项和， n 从键盘输入 。
提示：在3.5题的求和基础上修改代码，另外1/4 =0,如何得到小数，1.0/4即可*/
#include <stdio.h>
int main(){
    int a,n=0,b=1;
    float sum=0;
    scanf("%d",&n);
    for(a=0; a<n; a++){
    sum+=(1.0/b);
    b+=3;
    
    }
    printf("%.5f\n",sum);
    return 0;
}