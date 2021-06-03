#include<iostream>
using namespace std;
class rect
{
public:
    float l,b;
    rect()
    {
        l=0.0;
        b=0.0;
    }
    void get(float a,float b2)
    {
        l=a;
        b=b2;
        return;
    }
    void print()
    {
        cout<<endl<<"Area of rectangle with breath : -- "<<b<<" and length : -- "<<l<<" is equal to ---------->  "<<l*b;
    }
};
int main()
{
    cout<<"Enter number of rectangles ";
    int n;
    cin>>n;
    float a,b;
    rect arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter length and breath  ";
        cin>>a>>b;
        arr[i].get(a,b);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i].print();
    }
}
