#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include <queue>
using namespace std;
void BFS(vector<int> li[],map<int, string> m,int root,int v)
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    queue<int> q;
    q.push(root);
    visited[root] = true;
    while(!q.empty())
    {
        int k;
        k=q.front();
        cout<<m.find(q.front())->second<<"  ";
        q.pop();
        for(int i : li[k])
        {
            if(visited[i]==false)
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
void add_edge(vector<int> li[],int a,int b)
{
    li[a].push_back(b);
}
int get_value(string s,map<int, string> m,int v)
{
    for(int i=0;i<v;i++)
    {
        if(m.find(i)->second==s)
            return i;
    }
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
    BFS(li,m,get_value(root,m,v),v);
    return 0;
}

