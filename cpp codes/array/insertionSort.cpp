#include<bits/stdc++.h>
using namespace std;
//Insert an unsorted array to its’s correct position in sorted array
void insertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i])
        {
            for(int j=i;j>=0;j--)
            {
                if(arr[j+1]<arr[j])
                {
                    arr[j] = arr[j] + arr[j+1];
                    arr[j+1] = arr[j] - arr[j+1];
                    arr[j] = arr[j] - arr[j+1];
                }
            }
        }
    }
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
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}