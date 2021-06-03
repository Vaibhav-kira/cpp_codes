#include<iostream>
#include<math.h>
using namespace std;
int decimaltobinary(int n)
{
    int i=0;
    float r = 0;
    while(n)
    {
        r = r + pow(10,i)*(n%2);
        n = n/2;
        i++;
    }
    return r;
}
int binarytodecimal(int n)
{
    int i=0;
    float r=0;
    while(n)
    {
        r = r + pow(2,i)*(n%10);
        n = n/10;
        i++;
    }
    return r;
}
int main()
{
    int n,i=0,r=0;
    cin>>n;
    cout<<endl<<decimaltobinary(n)<<endl<<binarytodecimal(decimaltobinary(n));
    return 0;
}
