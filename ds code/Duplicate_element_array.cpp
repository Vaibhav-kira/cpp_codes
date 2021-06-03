#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]     :-   ";
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n&&j!=i;j++)
        {
            if(A[i]==A[j])
            {
                cout<<"A["<<i<<"]   i.e. "<<A[i]<<"   is also present at A["<<i<<"]"<<endl;
            }
        }
    }
    return 0;
}
