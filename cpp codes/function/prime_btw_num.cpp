#include<iostream>
#include<cmath>
using namespace std;
void print_prime(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        int flag = 0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    print_prime(a,b);
    return 0;
}