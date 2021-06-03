#include<bits/stdc++.h>
using namespace std;
//swap two numbers if in wrong order
//this will give largest no. at the end
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                /*
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                */
            }
        }
        if(flag==0)
        {
            return;
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
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}