
/*从键盘上输入10个数，计算均值，然后输出均值以及其中大于均值的数。
思考：3.1题的方法（循环+变量）虽然可以计算均值，但是要输出大于均值的数，必须要将输入的多个数都保存下来，以便与均值进行比较。
因此本题使用循环+变量的方法无法实现输出大于均值的数。怎么办？如何将输入的多个数都保存下来？需要数组。
*/
#include <stdio.h>


int main(){
    int a[10];
    int  i,sum=0;
    double aver;
    
    for(i=0;i<10;i++)
    {
        scanf("%d ", &a[i]);
        sum+=a[i];
    }
    aver=(double)sum/10;
    printf("平均值=%lf",&aver);
    
    for(i=0;i<10;i++){
        if(a[i]<aver)
        {
             printf("%d",&a[i]);
        }
    }

    return 0;
}