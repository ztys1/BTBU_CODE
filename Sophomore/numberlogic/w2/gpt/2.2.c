#include <stdio.h>


#define MASK 0xF


// 将8421码（压缩型）数据转换成十进制

int toDecimal(int num){  
int res = 0, base = 1;  
while(num > 0){  
res += (num & MASK) * base;  
num >>= 4;  
base *= 10;  
}  
return res;

}

// 将十进制转换成8421码（压缩型）数据

int to8421(int num){  
int res = 0, base = 1;  
while(num > 0){  
res += (num % 10) << (4 * base - 4);  
num /= 10;  
base++;  
}  
return res;

}

// 8421码数据进行加法运算时的修正

void adjust(int *num1, int *num2){  
int tmp = *num1 & MASK;  
tmp += *num2 & MASK;  
if(tmp > 9){  
*num1 += 6;  
}  
tmp = (*num1 >> 4) & MASK;  
tmp += (*num2 >> 4) & MASK;  
if(tmp > 9){  
*num1 += 6 << 4;  
}  
tmp = (*num1 >> 8) & MASK;  
tmp += (*num2 >> 8) & MASK;  
if(tmp > 9){  
*num1 += 6 << 8;  
}  
tmp = (*num1 >> 12) & MASK;  
tmp += (*num2 >> 12) & MASK;  
if(tmp > 9){  
*num1 += 6 << 12;  
}

}

int main(){  
int num1 = 0x1294; // 1294的8421码（压缩型）  
int num2 = 0x1A72; // 6790的8421码（压缩型）  
int res = num1 + num2;

// 对结果进行修正  
adjust(&num1, &num2);  
adjust(&num1, &res);

printf("1294 + 6790 = %d\n", toDecimal(res)); // 转换成十进制输出结果  
return 0;
}
