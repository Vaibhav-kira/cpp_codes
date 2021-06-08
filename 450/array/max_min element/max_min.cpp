#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max_element = INT_MIN;
    int min_element = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        max_element = max(max_element,arr[i]);
        min_element = min(min_element,arr[i]);
    }
    cout<<max_element<<" "<<min_element;
}