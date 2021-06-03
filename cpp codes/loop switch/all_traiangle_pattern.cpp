// right lower triangle
#include<iostream>
using namespace std;
int main()
{
    int h;
    cin>>h;
    cout<<endl<<endl<<"Right lower triangle"<<endl<<endl;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(i+j<=h-1)
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
    cout<<endl<<endl<<"Right upper triangle"<<endl<<endl;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(i>=j)
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
    cout<<endl<<endl<<"left lower triangle"<<endl<<endl;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(j>=i)
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
    cout<<endl<<endl<<"left upper triangle"<<endl<<endl;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(i+j>=h-1)
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
    return 0;
}