// hollow rectangle 
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length";
    cin>>l;
    cout<<"Enter breath";
    cin>>b;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(i==0||j==0||i==l-1||j==l-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}