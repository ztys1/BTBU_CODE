#include <stdio.h>

int main(){
    int num1[4], num2[4], sum[4];   // 定义三个长度为4的整型数组
    int i, carry = 0;   // i是循环计数器，carry是进位标志，初值为0

    printf("请输入第一个4位8421码数：\n");
    scanf("%1d%1d%1d%1d", &num1[3], &num1[2], &num1[1], &num1[0]);   // %1d表示只读取一个数字

    printf("请输入第二个4位8421码数：\n");
    scanf("%1d%1d%1d%1d", &num2[3], &num2[2], &num2[1], &num2[0]);

    // 逐位相加并修正
    for(i = 0; i < 4; ++i){
        sum[i] = num1[i] + num2[i] + carry;
        if(sum[i] <= 9){   // 不需要修正
            carry = 0;
        }else if(sum[i] > 9 && sum[i] < 16){   // 加6修正
            sum[i] += 6;
            carry = 1;
        }else{   // 加6修正并进位
            sum[i] -= 10;
            sum[i] += 6;
            carry = 1;
        }
    }

    // 输出修正后的和
    printf("相加后的结果为：\n");
    for(i = 3; i >= 0; --i){
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}