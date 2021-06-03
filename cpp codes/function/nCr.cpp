#include<iostream>
#include<cmath>
using namespace std;
long factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return factorial(n-1)*n;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n and r in nCr <----- ";
    cin>>n>>r;
    cout<<"nCr : - "<<factorial(n)/(factorial(n-r)*factorial(r));
    return 0;
}