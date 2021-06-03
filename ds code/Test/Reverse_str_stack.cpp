#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string sample;
	cout<<"Enter string which is to be reversed"<<endl;
	getline(cin,sample);
	stack <char> a;
	for(int i=0;i<sample.length();i++)
	{
		a.push(sample[i]);
	 }
	 cout<<"Reversed string is ....."<<endl;
	 for(int i=0;i<sample.length();i++)
	 {
	 	cout<<a.top();
	 	a.pop();
	  } 
}
