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
      cout<<"**********Node appended**********"<<endl;
    }
    else{
      Node* temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=b;
      cout<<"**********Node appended**********"<<endl;
    }
  }
//add node at begining
  void prepend(Node* b){
      b->next=head;
      head=b;
      cout<<"**********Node prepeded**********"<<endl;
  }
//delete by data
  void deleting(int d)
  {
    int flag=0;
    if(head==NULL){
      cout<<"No Node present cannot delete anything "<<endl;
      flag=1;
    }
    else{


            again:
            Node* temp=NULL;
            Node* ptr=head;
            Node* neptr=head->next;
            while(neptr!=NULL){
                if(head->data==d){
                    head=head->next;
                    cout<<"data was deleted "<<endl;
                    flag=1;
                }
                if(neptr->data==d){
                    temp=neptr;
                    neptr=NULL;
                }
                else{
                    ptr=ptr->next;
                    neptr=neptr->next;
                }
            }
            if(temp!=NULL){
                ptr->next=temp->next;
                cout<<"**********data was deleted********** "<<endl;
                flag=1;
            }
            if(ptr->next!=NULL){
                goto again;
            }
            if(flag==0){
                cout<<"Element not present !!!!!!!!"<<endl;
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
// ading a node after sepecified data
  void addafter(int d,Node* a){
      int flag=0;
      Node* temp=head;
      while(temp!=NULL){
        if(temp->data==d){
            a->next=temp->next;
            temp->next=a;
            temp=NULL;
            flag=1;
        }
        else{
            temp=temp->next;
        }
      }
      if(flag==0){
        cout<<"element after which insertion is to be made cannot  be  found"<<endl;

      }
      else{
        cout<<"**********Element inserted**********"<<endl;
      }
  }
//ading before a selected node
  void addbefor(int d,Node* a)
  {
      int flag=0;;
      if(head->data==d){
        a->next=head;
        head=a;
        flag=1;
      }
      else{
        Node* ac=NULL;
        Node* temp=head;
        Node* co=head->next;
        while(co!=NULL){
            if(co->data==d){
                a->next=co;
                temp->next=a;
                co=NULL;
                flag=1;
            }
            else{
                temp=temp->next;
                co=co->next;
            }
        }

      }
      if(flag==0){
        cout<<"data before which element is  to be added cannot be found"<<endl;

      }
      else{
        cout<<"**********Element added**********"<<endl;
      }
  }
};
int main()
{
  list s;
  int op,d;
  start:
  cout<<"1 for append"<<endl<<"2 for prepend"<<endl<<"3 for delete"<<endl<<"4 for display"<<endl<<"5 to insert element after a selected data"<<endl<<"6 to insert element before selected data"<<endl<<"7 to end"<<endl;
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
        cout<<"enter the data after which element is to be inserted"<<endl;
        cin>>d;
        cout<<"Enter element which is to be inserted"<<endl;
        int data;
        cin>>data;
        a->data=data;
        s.addafter(d,a);
        break;
    }
    case 6:{
        cout<<"enter the data before which element is to be inserted"<<endl;
        cin>>d;
        cout<<"Enter element which is to be inserted"<<endl;
        int data;
        cin>>data;
        a->data=data;
        s.addbefor(d,a);
        break;
    }
    case 7:{
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
