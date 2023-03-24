/*从键盘输入某年，判断该年是否闰年。
闰年条件：四年一闰但百年不闰；四百年又闰。*/
#include <stdio.h>
int main()
{
    int y,x,z,a;

    scanf("%d\n",&y);
    
    x=y%4;
    z=y%400;
    a=y%100;
    
    if(z==0)
    {printf("闰年\n");}
        else if(a==0)
        {printf("非闰年\n");}
            else if(x==0)
            {printf("闰年\n");}
                else 
                {printf("非闰年\n");}
    return 0;

}

