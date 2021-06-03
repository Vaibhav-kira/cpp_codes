#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int wrapper = n;
    int no = n;
    while(wrapper>=3)
    {
        no += wrapper/3;
        wrapper = wrapper%3 + wrapper/3; 
    }
    cout<<no;
}