#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
int binarySearch(int arr[],int f,int low,int high)
{
    int mid = (low + high)/2;
    if(arr[mid]==f)
    {
        return mid;
    }
    if(low>=high)
    {
        return -1;
    }
    if(arr[mid]<f)
    {
        return binarySearch(arr,f,mid+1,high);
    }
    if(arr[mid]>f)
    {
        return binarySearch(arr,f,low,mid-1);
    }
}
int linearSearch(int arr[],int f,int n)
{
    // do not use size of operator in function as it will always return 
    // 1 as arr is a pointer here ....
    for(int i = 0 ;i<n;i++)
    {
        if(arr[i]==f)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,f;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>f;
    cout<<linearSearch(arr,f,n);
    cout<<binarySearch(arr,f,0,n-1);
}