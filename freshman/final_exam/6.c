/*
6 区间求和

成绩: 5 / 折扣: 1
计算区间[m,n)内的自然数的和并输出。m、n从键盘输入。
预设代码

后置代码

view plainprint?
int main()  
{  
    int s,m,n;  
    scanf("%d%d",&m,&n);  
    s=sum(m,n);  
    printf("%d\n",s);  
    return 0;  
}  
*/

int sum(int a,int b)
{
    int i,c=0;
    for(i=a;i<b;i++)
    {
        c+=i;
    }
    return c;
}
///
int main()  
{  
    int s,m,n;  
    scanf("%d%d",&m,&n);  
    s=sum(m,n);  
    printf("%d\n",s);  
    return 0;  
}  