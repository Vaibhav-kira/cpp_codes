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
      cout<<"Node appended"<<endl;
    }
    else{
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=b;
      cout<<"Node appended"<<endl;
    }
  }
//delete by Node
  void deleting(Node* a)
  {
  	if(head==a)
  	{
  		head=head->next;
	  }
	else
	{
		Node* temp=head;
		while(temp!=NULL)
		{
			Node* prev;
			if(temp==a)
			{
				prev->next=temp->next;
			}
			prev=temp;
			temp=temp->next;
		}
	}
  }
  
//printing list
  void print()
  {
    if(head==NULL){
      cout<<"No element present in list"<<endl;
    }
    else{
      Node* ptr=head;
      while(ptr!=NULL){
        cout<<"("<<ptr->data<<")"<<"   ----->   ";
        ptr = ptr -> next;
      }
      cout<<"NULL"<<endl;
    }
  }
 //Main code for deleting duplicate elements
  void dupli_dele()
  {
  	Node* temp=head;
  	while(temp!=NULL&&temp->next!=NULL)
  	{
  		Node* prev=temp;
  		Node* temp2=temp->next;
  		while(temp2!=NULL){
  			if(temp2->data==temp->data)
  			{
  				deleting(temp2);
  				temp2=prev->next;
			  }
			else{
				prev=prev->next;
				temp2=temp2->next;
			}
		  }
		  temp=temp->next;
	  }
  }
};
int main()
{
  list s;
  int n;
  cout<<"Enter number of elements in linked list"<<endl;
  cin>>n;
  int ele;
  cout<<"Enter all the elements of linked list"<<endl;
  for(int i=0;i<n;i++)
  {
  	Node *a=new Node();
  	cin>>ele;
  	a->data=ele;
  	s.append(a);
  }
  cout<<"Elements in linked list before deleting duplicate elemets are :- "<<endl;
  s.print();
  cout<<endl;
  s.dupli_dele();
  cout<<"Deleting all duplicate elements........"<<endl;
  cout<<endl<<"Elemets  in linked list after deletion of duplicate elements are : - "<<endl;
  s.print();
  return 0;
}
