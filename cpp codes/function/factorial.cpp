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
    int n;
    cin>>n;
    cout<<"Factorial is : -  "<<factorial(n);
    return 0;
}