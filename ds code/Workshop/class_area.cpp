#include<iostream>
using namespace std;
class rectangle
{
public:
    float length;
    float breath;
    rectangle()
    {
        length = 0;
        breath = 0;
    }
    rectangle(float l,float b)
    {
        length = l;
        breath = b;
    }
    float area()
    {
        return length*breath;
    }
};
int main()
{
    rectangle a(4.5,5.5);
    cout<<"Area for length : - "<<a.length<<"  and breath :- "<<a.breath<<"   is ------->"<<a.area();
}
