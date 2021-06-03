#include<iostream>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
void add_edge(vector<int> li[],int a,int b)
{
    li[a].push_back(b);
    li[b].push_back(a);
}
int get_value(string s,map<int, string> m,int v)
{
    for(int i=0;i<v;i++)
    {
        if(m.find(i)->second==s)
            return i;
    }
}
void DFS2(vector<int> li[],bool visited[],int root,map<int, string> m)
{
    visited[root]=true;
    cout<<m.find(root)->second<<"  ";
    for(int i : li[root])
    {
        if(visited[i]==false)
            DFS2(li,visited,root,m);
    }
}
void DFS(vector<int> li[],map<int, string> m,int root,int v)
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    DFS2(li,visited,root,m);
}
int main()
{
    cout<<"Enter number of nodes in graph : - ";
    int v;
    cin>>v;
    vector<int> li[v];
    map<int, string> m;
    cout<<"Enter name of nodes : - "<<endl;
    for(int i=0;i<v;i++)
    {
        string a;
        cin>>a;
        m.insert({i,a});
    }
    cout<<endl;
    cout<<"Enter number of edges in graph : - ";
    int e;
    cin>>e;
    cout<<endl;
    for(int i=0;i<e;i++)
    {
        string a,b;
        cout<<"Enter Nodes between you want to add edge : -   ";
        cin>>a;
        cin>>b;
        add_edge(li,get_value(a,m,v),get_value(b,m,v));
    }
    cout<<"Enter root node of the graph : - ";
    string root;
    cin>>root;
    cout<<endl<<"BFS of the following graph is :- ";
    DFS(li,m,get_value(root,m,v),v);
    return 0;
}
