#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle() { radius = 10; }
    Circle(double r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
    void Show() { cout << "面积=" << getArea() << endl; }
};

int main() {
    double r1;
    cin >> r1;
    Circle a, b(r1);
    a.Show();
    b.Show();
    return 0;
}