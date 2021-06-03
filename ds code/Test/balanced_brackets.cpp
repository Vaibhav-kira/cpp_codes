#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string expre;
	stack <char> a;
	cout<<"Enter the expression"<<endl;
	getline(cin,expre);
	for(int i=0;i<expre.length();i++)
	{
		if(expre[i]=='(')
		{
			a.push(expre[i]);
		}
		if(expre[i]==')')
		{
			a.pop();
		}
	}
	if(a.empty())
	{
		cout<<"Balanced"<<endl;
	}
	else
	{
		cout<<"Unbalanced"<<endl;
	}
	return 0;
}
