#include<iostream>
using namespace std;
class que
{
	public:
	int rear,front,A[10000],n;
	que()
	{
		front=-1;
		rear=-1;
	}
	void create()
	{
		cout<<"Enter number of elements in queue"<<endl;;
		cin>>n;		
	}

	void inputs()
	{
		for(int i=0;i<n;i++)
		{
			cout<<"A["<<i<<"]   :-  ";
			cin>>A[i];
			rear++;
		}
		if(n>0)
		{
			front++;
		}
	}
	bool empty()
	{
		if(front==rear&&front==-1)
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
		if((rear==front-1)||(rear==n-1&&front==0))
		{
			
			return true;
			
		}
		else
		{
			
			return false;
		}
	}
	void insert(int data)
	{
		if(full())
		{
			cout<<"Queue is already full cannot add another element"<<endl;
		}
		else if(front==-1&&rear==-1)
		{
			A[rear+1]=data;
			rear++;
			front++;
			
			cout<<"************Data inserted sucessfully************"<<endl;
		}
		else if(rear==n-1)
		{
			rear=0;
			A[rear]=data;
			
		}
		else{
			A[rear+1]=data;
			rear++;
			cout<<"************Data inserted sucessfully************"<<endl;
			
		}
		
	}
	void delet()
	{
		if(empty())
		{
			cout<<"Queue is already empty"<<endl;
		}
		else if(front==n-1)
		{
			front=0;
			cout<<"************Data deleted sucessfully************"<<endl;
		}
		else{
			front++;
			
			cout<<"************Data deleted sucessfully************"<<endl;
		}
	}
	void display()
	{
		cout<<"*****************Elements in queue are*****************"<<endl;
		if(empty())
		{
			cout<<"Queue is empty"<<endl;
			return;
		}
		if(rear<front)
		{
			for(int i=front;i<n;i++)
			{
				cout<<"Pisition of element in array:- A["<<i<<"]  "<<"**********data :- "<<A[i]<<endl;
			}
			for(int i=0;i<=rear;i++)
			{
				cout<<"Pisition of element in array:- A["<<i<<"]  "<<"**********data :- "<<A[i]<<endl;
			}
		}
		else
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<"Pisition of element in array:- A["<<i<<"]  "<<"**********data :- "<<A[i]<<endl;
			}
		}
	}
};
int main()
{
	que obj1;
	obj1.create();
	int k;
	start:
	cout<<"***************************Following are functions we can perform on queue for queue***************************"<<endl;
	cout<<"1. To input all the elements of queue"<<endl<<"2. To input a element in queue"<<endl<<"3. To delete a element from queue"<<endl<<"4. To check if queue is empty or not"<<endl<<"5. To check if queue is full or not"<<endl<<"6. To display all the elements in queue"<<endl<<"7. To exit the program"<<endl;
	cin>>k;
	switch(k)
	{
		case 1:
			{
				obj1.inputs();
				break;
			}
		case 2:
			{
				cout<<"Enter the element which you want to incert "<<endl;
				int data;
				cin>>data;
				obj1.insert(data);
				break;
			}
		case 3:
			{
				obj1.delet();
				break;
			}
		case 4:
			{
				if(obj1.empty())
				{
					cout<<"Queue is empty"<<endl;
				}
				else
				{
					cout<<"Queue id not empty"<<endl;
				}
				break;
			}
		case 5:
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
		case 6:
			{
				obj1.display();
				break;
			}
		case 7:
			{
				return 0;
				break;
			}
		default:
			{
				cout<<"************Invalid input try again************"<<endl;
			}
	}
	goto start;
	return 0;
}
