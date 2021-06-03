#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
        {// brackets not necessary ..... 
            cout<<"One is selcted";
            break;
        }
        case 2:
        {
            cout<<"Two is selcted";
            break;
        }
        default:
        {
            cout<<"Default case";
        }
    }
    return 0;
}