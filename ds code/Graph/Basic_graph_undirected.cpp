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
		cout<<endl;
	}
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
		cout<<"Enter the  vertices through which you wand to add edge  : -  ";
		cin>>a;
		cin>>b;
		add_edge(li,a,b);
	}
	print_graph(li,v);
}
