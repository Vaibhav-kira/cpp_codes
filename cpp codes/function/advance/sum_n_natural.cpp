#include<iostream>
#include<cmath>
using namespace std;
int sum_natural(int n)
{
    //or n*(n+1)/2   this is easy 
    int sum = 0;
    /*while(n)
    {
        sum += n;
        n--;
    }*/
    sum = (n*(n+1))/2;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<"sum of "<<n<<" natural nnumbers is -->  "<<sum_natural(n);
}