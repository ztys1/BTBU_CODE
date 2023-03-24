/*从键盘输入8个数存入数组，查找是否存在13？如果找到13，输出找到，否则输出没找到。
提示：本题是5.1题的数组版

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
    for(i=0;i<8;i++) 
        if(a[i]==13){
            printf("找到\n");
            f=0;
            break;
        }
    if(f) printf("没找到\n");
   return 0;
}