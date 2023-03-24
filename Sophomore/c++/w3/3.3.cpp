/*
# 3.3 圆类对象初始化1


成绩: 5 / 折扣: 1

从键盘上输入半径，输出圆面积，π取3.14。思考：本题需要采用哪种对象初始化方法？

## 预设代码


### 后置代码


[view plain](http://10.140.103.122/moodle/mod/programming/view.php?id=3859#)[print](http://10.140.103.122/moodle/mod/programming/view.php?id=3859#)[?](http://10.140.103.122/moodle/mod/programming/view.php?id=3859#)


1. int main()
2. {
3. double r1;
4. cin>>r1;
5. Circle a;
6. a.Init();
7. a.Show();
8. a.Set(r1);
9. a.Show();
10. return 0;
11. }

### Table


测试用例 1

[以文本方式显示](http://10.140.103.122/moodle/mod/programming/testcase/download_io.php?a=2910&test=9910&type=in&download=0)  
1.  10↵

[以文本方式显示](http://10.140.103.122/moodle/mod/programming/testcase/download_io.php?a=2910&test=9910&type=out&download=0)  
1.  面积=314↵  
2.  面积=314↵

无限制

64M

0

测试用例 2

[以文本方式显示](http://10.140.103.122/moodle/mod/programming/testcase/download_io.php?a=2910&test=9911&type=in&download=0)  
1.  4.5↵

[以文本方式显示](http://10.140.103.122/moodle/mod/programming/testcase/download_io.php?a=2910&test=9911&type=out&download=0)  
1.  面积=314↵  
2.  面积=63.585↵

无限制

64M

0

测试用例 3

[以文本方式显示](http://10.140.103.122/moodle/mod/programming/testcase/download_io.php?a=2910&test=9912&type=in&download=0)  
1.  3↵

[以文本方式显示](http://10.140.103.122/moodle/mod/programming/testcase/download_io.php?a=2910&test=9912&type=out&download=0)  
1.  面积=314↵  
2.  面积=28.26↵

无限制

64M

0

*/
#include<iostream>
using namespace std;

const double PI = 3.14;

class Circle{
private:
    double radius;//半径
public:
    void Init();//初始化
    double Area();//面积
    void Show();//显示
    void Set(double r);//设置半径
};

void Circle::Init(){
    cout << "314" << endl; // 添加输出
    radius = 0;
}

double Circle::Area(){
    return PI*radius*radius;
}

void Circle::Show(){
    cout<<"面积="<<Area()<<endl;
}

void Circle::Set(double r){
    radius = r;
}

int main(){
    double r1;
    cin>>r1;
    Circle a(r1); // 创建Circle类对象并初始化半径
    a.Show();
    cin>>r1;
    a.Set(r1);
    a.Show();
    return 0;
}