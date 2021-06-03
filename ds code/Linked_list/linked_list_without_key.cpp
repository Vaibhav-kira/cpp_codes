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
//add node at begining
  void prepend(Node* b){
      b->next=head;
      head=b;
      cout<<"Node prepeded"<<endl;
  }
//delete by data
  void deleting(int d)
  {
    if(head==NULL){
      cout<<"No Node present cannot delete anything "<<endl;
    }
    else if(head->data==d){
    	head=head->next;
    	return;
	}
    else{
      Node* temp;
      temp=head;
      Node* ptr;
      int flag=0;
      while(temp->data!=d){
        if(temp->next!=NULL){
          ptr=temp;
          temp=temp->next;
        }
        else{
          flag=1;
          break;
        }
      }
      if(flag==1){
      cout<<"Element with this data cannot be found "<<endl;
      }
      else{
      	
        ptr->next=temp->next;
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
};
int main()
{
  list s;
  int op,d;
  start:
  cout<<"1 for append"<<endl<<"2 for prepend"<<endl<<"3 for delete"<<endl<<"4 for display"<<endl<<"5 to end"<<endl;
  cin>>op;
  Node *a=new Node();
  switch(op){
    case 1:{
      int data;
      cout<<"Enter data which is to appended"<<endl;
      cin>>data;
      a->data=data;
      s.append(a);
      break;
    }
    case 2:{
      cout<<"Enter data which is to be prepended"<<endl;
      cin>>d;
      a->data=d;
      s.prepend(a);
      break;
    }
    case 3:{
      cout<<"Enter data of node which is to be  deleted"<<endl;
      cin>>d;
      s.deleting(d);
      break;
    }
    case 4:{
      s.print();
      break;
    }
    case 5:{
      return 0;
      break;
    }
    default:{
      cout<<"Invalid selection try again"<<endl;
      goto start;
    }
  }
  goto start;
  return 0;
}
