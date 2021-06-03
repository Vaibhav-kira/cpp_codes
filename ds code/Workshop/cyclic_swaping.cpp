#include<iostream>
using namespace std;
void swap(int *a,int *b,int *c)
{
    int d;
    d=*c;
    *c=*b;
    *b=*a;
    *a=d;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    swap(&a,&b,&c);
    cout<<"a : - "<<a<<endl<<"b : - "<<endl<<b<<endl<<"b : - "<<c<<endl;
    return 0;
}
