/*8.8 单词个数统计

成绩: 10 / 折扣: 0.8
键盘输入一个字符串(字符串长度不超过100)，统计其中有多少个单词。

提示：空格是单词的分隔，详细如图所示。也可以自己想其它方案。
*/
#include <stdio.h>
int main()
{
    int i, count=0; char str [100];
    gets(str);
    //通过判断单词的尾，即非空格+空格，确定是一个单词
    for (i=1; str[i]!= '\0'; i++)
    {
        if((str[i]==' ')&&(str[i-1]!=' '))
        count++;
    }
    printf("%d words\n",count+1);//需要加上最厅一个单词
}