#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
  Node()
  {
    data=0;
    next=NULL;
  }
  Node(int k,int d)
  {
      data=k;
   }
};
static int flag=0;
class que
{
	public:
	Node* front=NULL;
	Node* rear=NULL;
	int max;
	void ele(int n)
	{
		max=n;
	}
	void insert(Node* a)
	{
		if(empty())
		{
			front=a;
			rear=a;
			flag++;
			cout<<"****inserted sucessfully****"<<flag<<endl;
		}
		else if(full())
		{
			cout<<"****Cannot insert already full****"<<endl;
		}
		else
		{
			rear->next=a;
			rear=a;
			flag++;
			cout<<"****inserted sucessfully****"<<flag<<endl;
		}
	}
	void dele()
	{
		if(empty())
		{
			cout<<"****Cannot delete already empty****"<<endl;
			return;
		}
		front=front->next;
		flag--;
		cout<<"****Deleted sucessfully****"<<flag<<endl;
	}
	bool empty()
	{
		if(front==NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool full()
	{
		if(flag==max||flag>max)
		{
			cout<<flag<<endl;
			return true;
		}
		else
		{
			return false;
		}
	}
	void display()
	{
		if(empty())
		{
			cout<<"Queue is Empty nothing present to print"<<endl;
		}
		else
		{
			Node* temp;
			temp=front;
			while(temp!=NULL)
			{
				cout<<temp->data<<"    --->    ";
				temp=temp->next;
			}
		}
	}
};
int main()
{
	que obj1;
	int data,ch;
	cout<<"Enter number of element in queue"<<endl;
	int n;
	cin>>n;
	obj1.ele(n);
	start:
	Node *a=new Node();
	cout<<endl<<"************Menu************"<<endl<<"1. Enqueue"<<endl<<"2. Dequeue"<<endl<<"3. Empty"<<endl<<"4. Full"<<endl<<"5. Display"<<endl<<"6. End program"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				cout<<"Enter data to be inserted"<<endl;
				cin>>data;
				a->data=data;
				obj1.insert(a);
				break;
			}
		case 2:
			{
				obj1.dele();
				break;
			}
		case 3:
			{
				if(obj1.empty())
				{
					cout<<"Queue is empty"<<endl;
				}
				else
				{
					cout<<"Queue is not empty"<<endl;
				}
				break;
			}
		case 4:
			{
				if(obj1.full())
				{
					cout<<"Queue is full"<<endl;
				}
				else
				{
					cout<<"Queue is not full"<<endl;
				}
				break;
			}
		case 5:
			{
				obj1.display();
				break;
			}
		case 6:
			{
				return 0;
			}
		default:
			{
				cout<<"####Invalid input try again####"<<endl;
			}
	}
	goto start;
	return 0;
}
