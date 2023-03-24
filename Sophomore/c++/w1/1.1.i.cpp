/*
1.1 圆的面积计算
成绩: 5 / 折扣: 1
从键盘上输入半径，输出圆面积，π取3.14。
*/
#include <iostream>
using namespace std;
const double pi = 3.14;
int main() {
    double r;
    cin >> r;
    cout<<"面积="<<pi * r * r<<endl ;
    return 0;
}
