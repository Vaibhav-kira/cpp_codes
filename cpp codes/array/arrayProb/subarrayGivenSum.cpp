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
    int sum;
    cin>>sum;
    int start=0,end=0,curr_sum = 0,i=0;
    // at max the complexity will be 2*n 
    for(int i=0;i<=n;i++)
    {
        //sum += a[j];
        if(curr_sum<sum)
        {
            curr_sum += a[i];
            end++;
            //start = i+1;
            //end = j+1;
        }
        else if(curr_sum==sum)
        {
            cout<<start+1<<" "<<end;
            return 0;
        }
        else
        {
            curr_sum -= a[start];
            start++;
            i--;
        }
        //
    }
    //cout<<start<<" "<<end;
    cout<<"Not found";
    return 0;
}