#include <stdio.h>
int main(){
    int i,n,p;
    p=1;
    scanf("%d\n",&n);
    for(i=1;i<n+1;i++)
    {
    p=p*i;
    }
    printf("%d\n",p);
}