#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int tempno = arr[n-1];
    int temp = n-1;
    while(temp>=0)
    {
        arr[temp] = arr[temp-1];
        temp--;
    }
    arr[0] = tempno;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
}