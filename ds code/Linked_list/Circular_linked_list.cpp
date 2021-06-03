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

//printing lis_circular
  void print(int n)
  {
    if(head==NULL){
      cout<<"No element present in lis_circular"<<endl;
    }
    else{
      Node* ptr=head;
      for(int i=0;i<n;i++){
        cout<<"("<<ptr->data<<")"<<"   ----->   ";
        ptr = ptr -> next;
      }
      cout<<"Head("<<head->data<<")"<<endl;
    }
  }
};
int main()
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
  s.print(n);
  return 0;
}
