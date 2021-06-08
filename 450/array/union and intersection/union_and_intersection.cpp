// both arrays are sorted
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,n2;
    cin>>n>>n2;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    //union
    vector<int> ans;
    vector<int> ans2;
    int i=0,j=0;
    while(i!=n||j!=n2)
    {
        if(i==n)
        {
            ans.push_back(arr2[j]);
            j++;
        }
        if(j==n2)
        {
            ans.push_back(arr[i]);
            i++;
        }
        if(arr[i]<arr2[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else if(arr2[j]<arr[i])
        {
            ans.push_back(arr2[j]);
            j++;
        }
        else if(arr[i]==arr2[j])
        {
            ans.push_back(arr[i]);
            ans2.push_back(arr[i]);
            i++;
            j++;
        }
    }
    //for(int i=0;i<ans.size();i++)
    //{
      //  cout<<ans[i];
    //}
    cout<<ans.size()<<" ";//<<" "<<ans2.size();
    cout<<ans2.size();
}
