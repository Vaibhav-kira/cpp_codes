#include<iostream>
using namespace std;
static int a=0;
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
class lis_circular
{
  public:
  Node* head;
  lis_circular()
  {
    head=NULL;
  }
  lis_circular(Node* n)
  {
    head=n;
  }
//add node at end
  void append(Node* b,int n)
  {
  	if(a==n-1)
  	{
  		Node* temp=head;
  		while(temp->next!=NULL){
  			temp=temp->next;
		  }
		  temp->next=b;
		  b->next=head;
		  return;
	  }
    if(head==NULL)
    {
      head=b;
      cout<<"Node appended"<<endl;
      a++;
    }
    else{
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=b;
      cout<<"Node appended"<<endl;
      a++;
    }
  }
//To check if loop is present or not
  void loop(int n)
  {
  	int flag=0;
  	Node* ptr=head;
  	while(ptr!=NULL){
  		ptr=ptr->next;
  		flag++;
  		if(flag>n)
  		{
  			cout<<"Loop is present "<<endl;
  			return;
		  }
	  }
	  cout<<"Loop is not present"<<endl;
  }
};
class list
{
  public:
  Node* head;
  list()
  {
    head=NULL;
  }
  list(Node* n)
  {
    head=n;
  }
//add node at end
  void append(Node* b)
  {
    if(head==NULL)
    {
      head=b;
      
    }
    else{
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=b;
      
    }
  }
//To check if loop is present or not
  void loop(int n)
  {
  	int flag=0;
  	Node* ptr=head;
  	while(ptr!=NULL){
  		ptr=ptr->next;
  		flag++;
  		if(flag>n)
  		{
  			cout<<"Loop is present "<<endl;
  			return;
		  }
	  }
	  cout<<"Loop is not present"<<endl;
  }

};
int main()
{
	start:
	cout<<"1. To use circular linked list"<<endl<<"2. To use Simple Linked List "<<endl<<"3. End"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				lis_circular s;
  				cout<<"Enter number of elements in linked lis_circular"<<endl;
  				int n;
  				cin>>n;
 				int ele;
 				for(int i=0;i<n;i++)
  				{
  					Node *a=new Node();
  					cin>>ele;
  					a->data=ele;
  					s.append(a,n);
  				}
  				s.loop(n);
  				break;
			}
		case 2:
			{
				list s;
  				cout<<"Enter number of elements in linked list"<<endl;
  				int n;
  				cin>>n;
 				int ele;
 				for(int i=0;i<n;i++)
  				{
  					Node *a=new Node();
  					cin>>ele;
  					a->data=ele;
  					s.append(a);
  				}
  				s.loop(n);
  				break;
			}
		case 3:
			{
				return 0;
			}
	}
	goto start;
	
}
