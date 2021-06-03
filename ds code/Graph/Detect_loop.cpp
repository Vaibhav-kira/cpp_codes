#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> li[],int a,int b)
{
	li[a].push_back(b);
	li[b].push_back(a);
}
void print_graph(vector<int> li[],int v)
{
	for(int i=0;i<v;i++)
	{
	    cout<<i<<" connected with ---------->  ";
		for(int j=0;j<li[i].size();j++)              //for(int j : li[i])        have to include -std gnu-11
		{
			cout<<li[i][j]<<" ----------- ";
		}
		cout<<"NULL"<<endl;
	}
}
bool DFS2(vector<int> li[],bool visited[],int root,int parent)
{
    visited[root]=true;
    for(int ad : li[root])
    {
        if(visited[ad]==false)
        {
            if(DFS2(li,visited,ad,root))
                return true;
        }
        else if(ad!=parent)
            return true;
    }
    return false;

}
bool DFS(vector<int> li[],int v,int root)
{
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            if(DFS2(li,visited,root,-1))
                return true;
        }
    }
    return false;
}
int main()
{
	cout<<"Enter number of vertices in array : - ";             // Name of vertex are namely 0,1,2,3,4.... for simplicity !!
	int v=3;
	cin>>v;
	vector<int> li[v];
	cout<<"Enter number of edges you want to add : - ";
	int e;
	cin>>e;
	int a,b,i;
	for(i=0;i<e;i++)
	{
		cout<<"Enter the  vertices through which you wand to add edge  : -  ";  //             0 --------- 2
		cin>>a;                                                                 //             |           |
		cin>>b;                                                                 //             1-----------5
		add_edge(li,a,b);                                                       //             |
	}                                                                           //             3-----------4
	if(DFS(li,v,0))
	{
	    cout<<"Graph does have a loop "<<endl;
	}
	else
        cout<<"Graph does not have a loop"<<endl;
	cout<<endl;
	cout<<"Original graph is as follows : - "<<endl;
	print_graph(li,v);
}



