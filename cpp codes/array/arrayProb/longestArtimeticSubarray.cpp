#include<bits/stdc++.h>
using namespace std;
// tell the length of maximum subarray
void longestArthiArray(int arr[],int n)
{
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2; // already calculated till 1
    int curr = 2;
    while(j<n)
    {
        if(pd == arr[j+1] - arr[j])
        {
            curr++;
        }
        else
        {
            pd = arr[j+1] - arr[j];
            pd = 2;
        }
        ans = max(ans,curr);
        j++;
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
    longestArthiArray(arr,n);
    return 0;
}