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
  Node(int d,Node* a)
  {
    data=d;
    next=a;
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
    if(head==0)
    {
      head=b;
    }
    else{
      Node* temp;
      temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=b;
    }
  }
//add node at begining
  void prepend(Node* b)
  {
    if(head==NULL)
    {
      head=b;
    }
    else{
      Node* temp;
      temp=head;
      b->next=temp;
      head=b;
    }
  }
//delete by data
  void deleting(int d)
  {
    if(head==NULL){
      cout<<"No Node present cannot delete anything "<<endl;
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
//print ing list
  void print()
  {
    if(head==NULL){
      cout<<"No element present in list"<<endl;
    }
    else{
      Node* ptr;
      ptr=head;
      while(ptr->next!=NULL){
        cout<<"("<<ptr->data<<")"<<"   ----->   ";
        ptr=ptr->next;
      }
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
  switch(op){
    case 1:{
      int data;
      Node* a;
      cout<<"Enter data which is to appended"<<endl;
      cin>>data;
      a->data=data;
      s.append(a);
      break;
    }
    case 2:{
      Node* a;
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
