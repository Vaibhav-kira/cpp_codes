#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[],int n)
{
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            max_sum = max(max_sum,sum);
        }
    }
    return max_sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxSubarraySum(arr,n);
}