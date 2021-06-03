#include<bits/stdc++.h>
using namespace std;
// record day is a day when the day is larger then all the previous day
// and id larger than the next day
void numberOfRecord(int arr[],int n)
{
    int ans = 0;
    int max_till = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int flag = 1;
        if(i == n-1)
        {
            if(arr[i]>max_till)
            {
                ans++;
            }
        }
        else if(arr[i]>max_till&&arr[i]>arr[i+1])
        {
            ans++;
        }
        max_till = max(max_till,arr[i]);
    }
    cout<<ans;
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
    numberOfRecord(arr,n);
    return 0;
}