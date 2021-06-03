//  1
//  1   1     
//  1   2   1
//  1   3   3   1   
//  1   4   6   4   1
// 0c0
// 1c0  1c1
// 2c0  2c1  2c2
// ...//
#include<iostream>
#include<cmath>
using namespace std;
long factorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return factorial(n-1)*n;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}