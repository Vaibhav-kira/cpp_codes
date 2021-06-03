#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n];
	int r;
	cin>>r;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		B[i]=A[i];
	}
	for(int i=0;i<n-r;i++)
	{
		A[i]=B[i+r];
	}
	for(int i=n-r;i<n;i++)
	{
		A[i]=B[i-(n-r)];
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
	}
	return 0;
}
