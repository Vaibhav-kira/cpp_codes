#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,flag=0;
    cin>>num;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"number is not prime";
    else
    cout<<"number is prime";
    return 0;
}