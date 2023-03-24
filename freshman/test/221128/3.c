/*
测验2.3 字符数组

成绩: 25 / 折扣: 0.8
输入一行字符，分别统计出其中的英文字母、空格和其他字符的个数，不区分大小写。
*/
#include<stdio.h>
int main()
{
	char c;
	int letters=0,space=0,others=0;
	
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			letters++;
		else if(c==' ')
			space++;
        
		else
		others++;
	}
	printf("字母=%d,空格=%d,其它=%d\n",letters, space, others);
}
