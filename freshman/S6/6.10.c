/*从键盘输入8个数存入数组，查找13出现几次，并输出次数，否则输出没找到。
提示：本题可以在6.9题基础上修改
预设代码

前置代码

view plainprint?
#include<stdio.h>     
int main()     
{  
    int i,a[8];     
    for(i=0;i<8;i++)  
       scanf("%d",&a[i]);  */
#include<stdio.h>     
int main()     
{  
    int i,a[8];     
    for(i=0;i<8;i++)  
       scanf("%d",&a[i]);  
	
    
    int f=1;
    int count=0;
    for(i=0;i<8;i++) 
        if(a[i]==13){
            count++;
            f=0;
            
        }
    if(f==0) printf("%d次\n",count);
    else if(f==1) printf("没找到\n");
   return 0;
}