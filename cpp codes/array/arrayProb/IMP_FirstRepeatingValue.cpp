#include<bits/stdc++.h>
using namespace std;
// time constraint in O(n)
// space constaint is 10^6 ....
void firstRepeating(int arr[],int n)
{
    int N = 1e5+2; // 1e6 means 10^6
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1; // initialize with -1
    }
    int minidx = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx = min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx + 1<<endl;
    }
}
int main()
{
    int t;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    firstRepeating(arr,n);
    return 0;
}
