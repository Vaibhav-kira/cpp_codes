#include<iostream>
using namespace std;
int main()
{
    char* p;
    *p = 'A';
    while(*p<='Z')
    {
        cout<<*p<<"  ";
        *p = *p + 1 ;
    }
}
