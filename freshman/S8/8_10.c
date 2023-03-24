/*8.10 字母频度2

成绩: 10 / 折扣: 0.8
从键盘输入一个字符串，该字符串实际长度不超过100。统计出现次数最高的英文字母并输出该字母。 英文字母区分大小写。
字母区分大小写，需要将字符串中出现的大小写字母的次数都记录，然后找到出现次数最高的那个英文字母，并输出。
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char f[100],k[50];
    int i,j,flag=0;
    gets(f);
    
    
    int n[50];
    int count=0;
    for(i=0;i<50;i++)
    {
        n[i]=0;
        k[i]=0;
    }
    
    for(j=0;f[j]!='\0';j++)
    {
        for(i=0;i<50;i++)
        {
            if(f[j]==k[i])
            {
                n[i]++;
                flag=1;
            }
        }
            if(flag==0)//字符串不在数组
            {
                k[count]=f[j];//新字符存入数组
                n[count]++;
                count++;//字符个数增加
            }
            flag=0;
        
    }
    
    int loc=0,p=0;
    for(i=0;i<count;i++)
    {
        if(loc<=n[i]&&k[i]!=' ')
        {
            loc=n[i];
            p=i;
        }
    }
    printf("%c\n",k[p]);
    return 0;
}