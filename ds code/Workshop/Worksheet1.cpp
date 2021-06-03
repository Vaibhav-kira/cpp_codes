#include<iostream>
#include<string>
using namespace std;
string evaluate(int A[])
{
    return "hi";
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<evaluate(A);
    return 0;
}
