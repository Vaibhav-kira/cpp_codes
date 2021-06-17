// subarray with maximum sum
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
    int currsumf = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsumf += a[i];
        if(currsumf<0)
        {
            currsumf = 0;
        }
        max_sum = max(max_sum,currsumf);
    }
    cout<<max_sum;
    return 0;
}