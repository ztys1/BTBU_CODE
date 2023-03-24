/*从键盘输入某年某月，然后计算并输出该年该月有几天。
提示：
1)闰年条件：四年一闰但百年不闰；四百年又闰。
2)大月31天，小月30天，闰年2月为29天，平年2月为28天*/
#include <stdio.h>
int main()
{


	int a,b;
	scanf("%d %d\n",&a,&b); 
	if(a%4==0 && a%100!=0)
	{
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
        printf("31天\n");
        else if (b==4||b==6||b==9||b==11)
        {
            printf("30天\n");
        }
        else printf("29天\n");
        
	}
	else if(a%400==0)
	{
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
        printf("31天\n");
        else if (b==4||b==6||b==9||b==11)
        {
            printf("30天\n");
        }
        else printf("29天\n");
	}
	else
	{
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
        printf("31天\n");
        else if (b==4||b==6||b==9||b==11)
        {
            printf("30天\n");
        }
        else printf("28天\n");
	}


    return 0;
}