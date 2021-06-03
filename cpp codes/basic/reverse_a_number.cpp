#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,rev=0;
    cin>>num;
    while(num)
    {
        int last;
        last = num%10;
        rev = rev*10 + last;
        num = num/10;
    }
    cout<<rev;
    return 0;
}