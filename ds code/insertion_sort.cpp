#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elemennts in array which is to be sorted"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]    :- ";
        cin>>A[i];
    }
    int i,j,temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = temp;
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]    :- ";
        cout<<A[i]<<endl;
    }
}
