#include<iostream>
#include<cmath>
using namespace std;
bool is_pytha(int a,int b,int c)
{
    int m = max(a,max(b,c));
    int m2=0,m3=0;
    if(m==a)
    {
        m2 = b;
        m3 = c;
    }
    else if(m==b)
    {
        m2 = a;
        m3 = c;
    }
    else
    {
        m2 = a;
        m3 = b;
    }
    if( m*m == m2*m2 + m3*m3 )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(is_pytha(a,b,c))
    {
        cout<<"is pytha";
    }
    else
    {
        cout<<"not pytha";
    }
    return 0;
}