#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    float rev=0;
    cin>>num;
    while(num>0)
    {
        int last;
        last = num%10;
        rev += pow(last,3) ;
        num = num/10;
    }
    cout<<rev;
    return 0;
}