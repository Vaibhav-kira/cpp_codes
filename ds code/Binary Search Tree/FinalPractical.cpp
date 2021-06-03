//Write a program to visit all the vertex that are connected with each other
#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include <queue>
using namespace std;
//Print graph function used to print the connected values of grapj
void print_graph(vector<int> li[],int v,map<int, string> m)
{
	for(int i=0;i<v;i++)
	{
	    cout<<endl<<m.find(i)->second<<" connected with ---------->  ";
		for(int j=0;j<li[i].size();j++)              //for(int j : li[i])        have to include -std gnu-11
		{
			cout<<m.find(li[i][j])->second<<" ----------- ";
		}
		cout<<endl;
	}
}
// BFS function used to find BFS of following graph
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
//Function to add edge in the graph
void add_edge(vector<int> li[],int a,int b)
{
    li[a].push_back(b);
    li[b].push_back(a);
}
// Function to get value from hash map
int get_value(string s,map<int, string> m,int v)
{
    for(int i=0;i<v;i++)
    {
        if(m.find(i)->second==s)
            return i;
    }
}
// Main function
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
        cout<<"Enter Nodes between you want to add edge : -   ";           //   A----D
        cin>>a;                                                            //   |    |
        cin>>b;                                                            //   B----C
        add_edge(li,get_value(a,m,v),get_value(b,m,v));                    //   |
    }                                                                      //   E----F
    cout<<"Enter root node of the graph : - ";
    string root;
    cin>>root;
    cout<<endl<<"Connection in graph is as follows :- ";
    print_graph(li,v,m);
    cout<<endl<<"BFS of the following graph is :- ";
    BFS(li,m,get_value(root,m,v),v);
    return 0;
}

