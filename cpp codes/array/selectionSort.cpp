#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int a = arr[j];
            int b = arr[i];
            if(a<b)
            {
                arr[i] = a;
                arr[j] = b;
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
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}