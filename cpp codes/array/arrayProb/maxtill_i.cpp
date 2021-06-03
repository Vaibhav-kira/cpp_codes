#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int i;
    cin>>i;
    int maxNo = INT_MIN;
    for(int j=0;j<=i;j++)
    {
        maxNo = max(maxNo,arr[j]);
    }
    cout<<maxNo;
    return 0;
}