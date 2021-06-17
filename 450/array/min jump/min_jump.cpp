// element can jump to any position between that element 
// NOT ABLE TO SOLVE
#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[],int n)
{
    int jump = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            return -1;
        }
        if(i+arr[i]>=n-1)
        {
            return jump++;
        }
        int max_jump = INT_MIN;
        for(int j=i;j<=i+arr[i];j++)
        {
            max_jump = max(max_jump,arr[j]+i);
        }
        i = max_jump;
        jump++;
    }
    return jump;
}
int main()
{
    int n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }
    cout<<minJumps(arr,n);
}