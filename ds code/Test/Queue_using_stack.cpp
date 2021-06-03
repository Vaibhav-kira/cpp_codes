#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <int> a;
	stack <int> b;
	start:
	cout<<"Funtions in queue are"<<endl<<"1. enqueue"<<endl<<"2. dequeue"<<endl<<"3. display"<<endl<<"4. exit"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int data;
				cout<<"enter data"<<endl;
				cin>>data;
				a.push(data);
				break;
			}
		case 2:
			{
				if(a.empty()&&b.empty())
				{
					cout<<"Queue is empty"<<endl;
					break;
				}
				while(!a.empty())
				{
					b.push(a.top());
					a.pop();
				}
				cout<<b.top()<<"   is removed"<<endl;
				b.pop();
				while(!b.empty())
				{
					a.push(b.top());
					b.pop();
				}
				break;
			}
		case 4:
			{
				return 0;
			}
		default:
			{
				cout<<"Invalid input !!!"<<endl;
			}
	}
	goto start;
	return 0;
}
