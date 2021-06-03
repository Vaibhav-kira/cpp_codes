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
void BFS(vector<int> li[],int v,int root,map<int, string> m)
{
    bool b[v];
    for(int i=0;i<v;i++)
        b[i]=false;
    b[root]=true;
    queue<int> q;
    q.push(root);
    while(!q.empty())
    {
        cout<<m.find(q.front())->second<<"  ";
        int temp=q.front();
        q.pop();
        for(int i : li[temp])
        {
            if(b[i]==false)
            {
                q.push(i);
                b[i]=true;
            }
        }
    }
    cout<<endl;
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
	cout<<"Enter number of vertices in array : - ";
	int v;
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
	int a,b,i;
	for(i=0;i<e;i++)
	{
		cout<<"Enter the  vertices through which you wand to add edge  : -  ";  //             A --------- D
		string k,l;                                                             //             |           |
		cin>>k;                                                                 //             B-----------C
		cin>>l;                                                                 //             |
		add_edge(li,get_value(k,m,v),get_value(l,m,v));                         //             E-----------F
	}
	cout<<"Enter root node for BFS";
	string root;
	cin>>root;
	cout<<endl<<"BFS of the following graph is : - ";
	BFS(li,v,get_value(root,m,v),m);
	cout<<endl<<"Original graph is as follows : - "<<endl;
	print_graph(li,v,m);
}

