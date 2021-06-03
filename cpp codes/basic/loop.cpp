#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) // entry controlled loop
    {
        cout<<i<<"\n";
    }
    int i=0;
    while(i<n)          // endtry control loop
    {
        cout<<i<<endl;
        i++;
    }
    i=0;
    do                  // exit controll loop 
    {
        cout<<i<<endl;
        i++;
        /* code */
    } while (i<n);
    return 0;
}
