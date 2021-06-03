// starnge butterfly patter
//*      *
//**    **
//***  ***
//********
//********
//***  ***
//**    **
//*      *
// alternate aproach
/*
printing * then space the * for each row for upper half ...
running the loop for n to 1 in reverse
*/
#include<iostream>
using namespace std;
int main()
{
    int h;
    cin>>h;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<2*h;j++)
        {
            if(i>=j||i+j>=2*h-1)   //i+j>=h-1
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
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<2*h;j++)
        {
            if(i+j<=h-1||j-h>=i)   //i+j>=h-1
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