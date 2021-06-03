#include<iostream>
using namespace std;
class que
{
	public:
		int A[1000],front,rear,flag,n,k;
		que()
		{
			rear=-1;
			front=-1;
		}
		void create()
		{
			cout<<"Enter Number of elements in Queue"<<endl;
			cin>>n;
		}
		void pri()
		{
			cout<<"Choose which of the following priority is choosen:-"<<endl<<"1. Higher number higher priority"<<endl<<"2. Lower number lower priority"<<endl<<endl;
			cin>>k;
		}
		bool empty()
		{
			if((front==rear&&front==-1)||front>rear)
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
			if(rear==n-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void dele()
		{
			if(empty())
			{
				cout<<"Queue is already empty cannot delete "<<endl;
			}
			else
			{
				cout<<A[front]<<endl;
				front++;
				cout<<"******Data deleted sucessfully******"<<endl;
			}
		}
		void display()
		{
			if(empty())
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<"A["<<i<<"]    :- "<<A[i]<<endl;
				}
			}
		}
		void insert(int data)
		{
			if(empty())
			{
				front=0;
				rear=0;
				A[0]=data;
				cout<<"******Data inserted successfully*******"<<endl;
			}
			else if(full())
			{
				cout<<"Queue is full Cannot insert more elements"<<endl;
			}
			else if(k==2)
			{
				A[rear+1]=data;
				rear++;
				for(int i=rear;i>0;i--)
				{
					if(A[i]>=A[i-1])
					{
						break;
					}
					else if (A[i]<A[i-1])
					{
						A[i]=A[i]+A[i-1];
						A[i-1]=A[i]-A[i-1];
						A[i]=A[i]-A[i-1];
					}
				}
				cout<<"******Data inserted successfully*******"<<endl;
			}
			else if(k==1)
			{
				A[rear+1]=data;
				rear++;
				for(int i=rear;i>0;i--)
				{
					if(A[i]<=A[i-1])
					{
						break;
					}
					else if (A[i]>A[i-1])
					{
						A[i]=A[i]+A[i-1];
						A[i-1]=A[i]-A[i-1];
						A[i]=A[i]-A[i-1];
					}
				}
				cout<<"******Data inserted successfully*******"<<endl;
			}
			else
			{
				cout<<"Incorrect option for priority is choosen"<<endl<<endl;
			}
		}
};
int main()
{
	que obj1;
	int n;
	obj1.create();
	obj1.pri();
	start:
	cout<<"***************************Following are functions we can perform on queue for queue***************************"<<endl;
	cout<<endl<<"1. To input a element in queue"<<endl<<"2. To delete a element from queue"<<endl<<"3. To check if queue is empty or not"<<endl<<"4. To check if queue is full or not"<<endl<<"5. To display all the elements in queue"<<endl<<"6. To exit the program"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int data;
				cout<<"Enter data to be inserted"<<endl;
				cin>>data;
				obj1.insert(data);
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
				break;
			}
		default:
			{
				cout<<"Invalid input try again"<<endl;
				break;
			}
	}
	goto start;
}
