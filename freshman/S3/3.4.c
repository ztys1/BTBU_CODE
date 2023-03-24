#include <stdio.h>
int main(){
    int n=0,b=1,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    
    b=i*i;
    sum+=b;
    }

    printf("sum=%d\n",sum);
    return 0;
}