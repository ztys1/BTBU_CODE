/*从键盘输入一个大写字母，要求输出其小写字母，如果输入小写字母或者其它字符，提示输入错误。<1.12题的改进版>
转换公式：小写字母=大写字母+32*/
#include<stdio.h>

int main()
{
	char c1,c2; 
    c1=getchar(); 
    c2=c1+32; 

	if(c2>=97&&c2<=122)
	{
    printf("%c\n",c2);
	}
	else
	{
		printf("输入错误\n");
    }	
	return 0;
}
