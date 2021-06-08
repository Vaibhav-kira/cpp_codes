#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int N = *max_element(a,a+n);
    bool sm[N];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            sm[a[i]]=true;
        }
    }
    for(int i=0;i<int(N);i++)
    {
        if(!sm[i])
        {
            cout<<i;
            break;
        }
    }
    return 0;
}