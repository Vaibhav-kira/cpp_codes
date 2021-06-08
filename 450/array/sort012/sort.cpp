#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int n_0=0;
    int n_1=0;
    int n_2=0;  
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            n_0++;
        }
        else if(arr[i]==1)
        {
            n_1++;
        }
        else if(arr[i]==2)
        {
            n_2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(n_0>0)
        {
            arr[i]=0;
            n_0--;
        }
        else if(n_1>0)
        {
            arr[i]=1;
            n_1--;
        }
        else if(n_2>0)
        {
            arr[i]=2;
            n_2--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
}