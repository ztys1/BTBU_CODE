#include <iostream> 
using namespace std;
class Circle
{
public:
    float m_r;
void Init()
{
    float r=10; 
    m_r=r;
}
void Set (float r)
{
    m_r=r;
}
void Show()
{
    cout<<"面积="<<3.14*m_r*m_r<<endl;//中文“=”和英文“=”不同
}
};
