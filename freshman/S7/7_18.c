/*7.18 多项式求和8 
 
成绩: 5 / 折扣: 0.8 
已知多项式 ln ，从键盘上输入x，假设x的范围是(-1，1]，求ln(1+x),要求计算前10项，结果保留4位小数。 
提示： 
方法1：分别寻找分子和分母的循环规律 
方法2：找前项和后项的关系*/  
#include <stdio.h>  
int main()  
{  
    //定义变量  
    float x,b,sum=0.0,c;  
    int i,j;  
    int flag=1;  
    int n=10,m=10;  
    //输入  
    scanf("%f\n",&x);  
  
    //运算  
      
    b=1.0;//分母  
    for(i=0;i<10;i++)//一共十项  
    {  
        c=1.0;  
        m--;  
        for(j=1;j<=n-m;j++)//每一项分子。从第一项开始  
        {  
            c*=x;  
        }  
          
        c/=(float)b;  
        c*=(float)flag;  
        sum+=c;  
              
        flag=-flag;//符号  
        b++;//分母  
          
    }  
    //输出  
    if(sum<0)  
    printf("%.4f\n",-sum);  
    else  
    printf("%.4f\n",sum);  
    return 0;  
}  