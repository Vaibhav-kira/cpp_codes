#include<iostream>
using namespace std;
void fibonaci_without_recursion(int n)
{
    cout<<"without recursion : - ";
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++)
    {
        int c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
int f = 1;
void fib_rec(int a,int b,int n)
{
    if(f==n)
    {
        return;
    }
    if(f==1)
    {
        cout<<a<<" "<<b<<" ";
        f++;
        fib_rec(b,a+b,n);
    }
    else
    {
        cout<<b<<" ";
        f++;
        fib_rec(b,a+b,n);
    }
}
int main()
{
    int n;
    cin>>n;
    fibonaci_without_recursion(n);
    cout<<endl;
    cout<<"with recursion : - ";
    fib_rec(0,1,n);
    return 0;
}