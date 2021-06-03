#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=5,m=5;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Enter arr["<<i<<"]["<<j<<"] : - ";
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl<<"Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<endl<<endl<<"spiral order is .... : - ";
    int sr=0,er=4,sc=0,ec=4;
    while(sr<er&&sc<ec)
    {
        cout<<endl<<"****************************"<<endl;
        cout<<endl<<"First row"<<endl;
        for(int i=sc;i<=ec;i++)
        {
            cout<<arr[sr][i]<<"    ";
        }
        sr++;
        cout<<endl<<"Last column"<<endl;
        for(int i=sr;i<=er;i++)
        {
            cout<<arr[i][ec]<<"    ";
        }
        ec--;
        cout<<endl<<"Last row"<<endl;
        for(int i=ec;i>=sc;i--)
        {
            cout<<arr[er][i]<<"    ";
        }
        er--;
        cout<<endl<<"last column"<<endl;
        for(int i=er;i>=sr;i--)
        {
            cout<<arr[i][sc]<<"    ";
        }
        sc++;
    }
}
