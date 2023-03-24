/*7.8 加权平均

成绩: 5 / 折扣: 0.8
11个评委其权值分别为5,6,7,3,4,4,8,8,10,6,9，从键盘上输入11个评委的分值，计算出加权平均分。
加权平均的计算公式如下：

其中f1 + f2 + ... + fk=n，f1，f2，…，fk叫做权。*/
#include <stdio.h>
int main()
{
    int x[11]={5,6,7,3,4,4,8,8,10,6,9},f[11],all=0,i,j,n=0;
    float ave;
    for(i=0;i<11;i++)//输入
    {
        scanf("%d ",&f[i]);
    }
    for(j=0;j<11;j++)
    {
        n+=x[j];//求总权n
        all+=x[j]*f[j];
    }
    ave=(float)all/n;
    printf("%.2f\n",ave);
    return 0;
}