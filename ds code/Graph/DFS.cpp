#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> li[],int a,int b)
{
	li[a].push_back(b);
	li[b].push_back(a);
}
void print_graph(vector<int> li[],int v,map<int, string> m)
{
	for(int i=0;i<v;i++)
	{
	    cout<<m.find(i)->second<<" connected with ---------->  ";
		for(int j=0;j<li[i].size();j++)              //for(int j : li[i])        have to include -std gnu-11
		{
			cout<<m.find(li[i][j])->second<<" ----------- ";
		}
		cout<<"NULL"<<endl;
	}
}
void DFS2(vector<int> li[],bool visited[],int root,map<int, string> m)
{
    visited[root]=true;
    cout<<m.find(root)->second<<" ";
    for(int i : li[root])
    {
        if(visited[i]==false)
            DFS2(li,visited,i,m);
    }
}
void DFS(vector<int> li[],int v,int root,map<int, string> m)
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=0;
    DFS2(li,visited,root,m);
}
int get_value(string a,map<int, string> m,int v)
{
    for(int i=0;i<v;i++)
    {
        if(m.find(i)->second==a)
            return i;
    }
}
int main()
{
	cout<<"Enter number of vertices in array : - ";             // Name of vertex are namely 0,1,2,3,4.... for simplicity !!
	int v=3;
	cin>>v;
	map<int, string> m;
    cout<<"Enter name of nodes "<<endl;
    for(int i=0;i<v;i++)
    {
        string s1;
        cin>>s1;
        m.insert({i,s1});
    }
	vector<int> li[v];
	cout<<"Enter number of edges you want to add : - ";
	int e;
	cin>>e;
	int i;
	for(i=0;i<e;i++)
	{
	    string a,b;
		cout<<"Enter the  vertices through which you wand to add edge  : -  ";  //             A --------- D
		cin>>a;                                                                 //             |           |
		cin>>b;                                                                 //             B-----------C
		add_edge(li,get_value(a,m,v),get_value(b,m,v));                         //             |
	}                                                                           //             E-----------F
	cout<<"Enter root node for BFS";
	string root;
	cin>>root;
	cout<<"DFS of the following graph is : - ";
	DFS(li,v,get_value(root,m,v),m);
	cout<<endl;
	cout<<"Original graph is as follows : - "<<endl;
	print_graph(li,v,m);
}


