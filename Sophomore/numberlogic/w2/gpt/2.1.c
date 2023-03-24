#include <stdio.h>


//函数实现两个4位8421码（压缩型）数据的加法运算

int add8421(short a, short b){  
short a1, b1, c1;    //分别存放a、b、c的第一位，即个位  
short a2, b2, c2;    //分别存放a、b、c的第二位，即十位  
short a3, b3, c3;    //分别存放a、b、c的第三位，即百位  
short a4, b4, c4;    //分别存放a、b、c的第四位，即千位

// 将原本存放在short类型变量中的结果分割成4位数据  
a1 = a % 16;  
a2 = (a / 16) % 16;  
a3 = (a / 256) % 16;  
a4 = (a / 4096) % 16;  
b1 = b % 16;  
b2 = (b / 16) % 16;  
b3 = (b / 256) % 16;  
b4 = (b / 4096) % 16;  
// 对每两个相同位相加，并进行加6修正  
c4 = (a4 + b4) % 16;  
c3 = (a3 + b3 + (a4 + b4) / 16) % 16;  
c2 = (a2 + b2 + (a3 + b3 +(a4 + b4) / 16) / 16) % 16;

c1 = (a1 + b1 + (a2 + b2 +(a3 + b3 + (a4 + b4) / 16) / 16) / 16) % 16;

// 将结果按4位8421码的格式组合成结果

short c = c4 * 4096 + c3 * 256 + c2 * 16 + c1;

return c;

}

int main()

{

short a, b, result;

printf("请输入两个四位8421码数据：\n");

scanf("%hd%hd", &a, &b);

result = add8421(a, b);

printf("a + b = %d\n", result);

return 0;

}
