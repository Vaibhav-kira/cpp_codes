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
    int max_sum = INT_MIN;
    // brute force
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<=j;k++)
            {
                sum += a[k];
            }
            max_sum = max(sum,max_sum);
        }
    }   
    cout<<max_sum<<" ";
    max_sum = INT_MIN;
    //better aproach;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += a[j];
            max_sum = max(sum,max_sum); 
        }
    }
    cout<<max_sum<<" ";
    // more better approach
    // cumulative approach
    // arr = -1 2 3 5 
    //cumm =  0 -1 1 4 9 //sum till that number first element will be 0
    int currsum[n+1];
    currsum[0] = 0;
    for(int i=1;i<=n;i++)
    {
         currsum[i]  = currsum[i-1] + a[i-1];
    }
    max_sum = INT_MIN;
    // looping through currsum complexity same as above ....
    // n^2
    for(int i=1;i<=n;i++)
    {
        int sum = 0;
        for(int j=0;j<i;j++)
        {
            sum = currsum[i] - currsum[j];
            max_sum = max(max_sum,sum);
        }
    }
    cout<<max_sum<<" ";
    // O(n)
    // kadanes algorithm
    int currsumf = 0;
    max_sum = INT_MIN;
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