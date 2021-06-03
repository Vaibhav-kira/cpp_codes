#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    cout<<"Enter no. of nodes in graph :- ";
    int v;
    cin>>v;
    map<int, string> m;
    cout<<"Enter name of nodes "<<endl;
    for(int i=0;i<v;i++)
    {
        string s1;
        getline(cin,s1);
        getline(cin,s1);
        m.insert({i,s1});
    }
    for(int i=0;i<v;i++)
    {
        cout<<m.find(i)->second<<endl;
    }
    return 0;
}
