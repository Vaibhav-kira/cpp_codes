#include<iostream>
#include<stack>
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
      
    }
    else{
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=b;
      
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
//Reversing list
  stack<int> reverse()
  {
  	list temp;
  	stack<int> s;
  	Node* ptr=head;
    while(ptr!=NULL){
    	s.push(ptr->data);
    	ptr=ptr->next;
    }
	return s; 
   } 
};
int main()
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
  cout<<"List before reversing"<<endl;
  s.print();
  cout<<endl;
  stack<int> k;
  k=s.reverse();
  list ans;
  while(!k.empty())
  {
  	Node *a=new Node();
  	a->data=k.top();
  	ans.append(a);
  	k.pop();
  }
  cout<<"List after reversing"<<endl;
  ans.print();
  return 0;
}
