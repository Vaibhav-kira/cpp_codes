// inverted half pyramid
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter an height < -  ";
    int h,k=0;
    cin>>h;
    int w = 2*h - 1;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(j>=k&&j<=w-k-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        k++;
        cout<<endl;
    }
    return  0;
}