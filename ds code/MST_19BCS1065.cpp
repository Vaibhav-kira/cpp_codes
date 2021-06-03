#include<iostream>
using namespace std;
int n,m;
void display(int A[])
{
    for(int i=0;i<m;i++)
    {
        cout<<"A["<<i<<"]   ----->  "<<A[i]<<endl;
    }
}
void insertingEnd(int data,int A[])
{
    A[m]=data;
    m++;
}
int main()
{
    cout<<"Enter number of elements you want in array = ";
    cin>>n;
    cout<<"Enter number of element whose data you want to insert in array at starting = ";
    cin>>m;
    int A[n];
    for(int i=0;i<m;i++)
    {
        cout<<"Enter A["<<i<<"] <-----  ";
        cin>>A[i];
    }
    int ch;
    start:
    cout<<endl<<"1. To insert element at end of array "<<endl<<"2. To display elements of array"<<endl<<"3. To end the program"<<endl;
    cin>>ch;
    switch(ch)
    {
    case(1):
        {
            if(m==n||m>n)
            {
                cout<<"Array is full can only print the elements "<<endl;
                goto start;
            }
            int data;
            cout<<"Enter data you want to insert ";
            cin>>data;
            insertingEnd(data,A);
            break;
        }
    case(2):
        {
            display(A);
            break;
        }
    case(3):
        {
            return 0;
            break;
        }
    default:
        {
            cout<<"Invalid input "<<endl;
        }
    }
    goto start;
    return 0;
}
