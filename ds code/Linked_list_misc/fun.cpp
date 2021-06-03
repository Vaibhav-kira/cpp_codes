#include<iostream>
#include<string>
using namespace std;
class Node
{
  public:
  int data;
  string name;
  string designation;
  string email;
  string adress;
  int salary;
  Node* next;
  Node()
  {
    data=0;
    name="NULL";
    designation="NULL";
    email="NULL";
    adress="NULL";
    salary=0;
    next=NULL;
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
      cout<<"Element with this id cannot be found "<<endl;
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
        cout<<ptr->data<<"    "<<ptr->name<<"    "<<ptr->adress<<"    "<<ptr->designation<<"    "<<ptr->salary<<"    "<<ptr->email<<endl;
        ptr = ptr -> next;
      }
      cout<<"NULL"<<endl;
    }
  }
  void search(int d)
  {
      Node* temp=head;
      while(temp!=NULL)
      {
          if(temp->data==d)
          {
              cout<<temp->data<<"    "<<temp->name<<"    "<<temp->adress<<"    "<<temp->designation<<"    "<<temp->salary<<"    "<<temp->email<<endl;
              return;
          }
          temp=temp->next;
      }
      cout<<endl<<"Not found"<<endl;
      return;
  }
};
int main()
{
  list s;
  int op,d;
  int n;
  cout<<"Enter number of employee initially "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      Node *a=new Node();
      int data;
      string name;
      string designation;
      string email;
      string adress;
      int salary;
      cout<<"Enter employee id : - ";
      cin>>data;
      cout<<"Enter name of employee : - ";
      cin>>name;
      cout<<"Enter designation of employee : - ";
      cin>>designation;
      cout<<"Enter email of employee : - ";
      cin>>email;
      cout<<"Enter adress of employee : - ";
      cin>>adress;
      cout<<"Enter salary of employee : - ";
      cin>>salary;
      a->salary=salary;
      a->data=data;
      a->designation=designation;
      a->email=email;
      a->adress=adress;
      a->name=name;
      s.append(a);
  }
  start:
  cout<<"1 to add new employe"<<endl<<"2 for search"<<endl<<"3 for delete"<<endl<<"4 for display"<<endl<<"5 to end"<<endl;
  cin>>op;
  Node *a=new Node();
  switch(op){
    case 1:{
      int data;
      string name;
      string designation;
      string email;
      string adress;
      int salary;
      cout<<"Enter employee id : - ";
      cin>>data;
      cout<<"Enter name of employee : - ";
      cin>>name;
      cout<<"Enter designation of employee : - ";
      cin>>designation;
      cout<<"Enter email of employee : - ";
      cin>>email;
      cout<<"Enter adress of employee : - ";
      cin>>adress;
      cout<<"Enter salary of employee : - ";
      cin>>salary;
      a->salary=salary;
      a->data=data;
      a->designation=designation;
      a->email=email;
      a->adress=adress;
      a->name=name;
      s.append(a);
      break;
    }
    case 2:{
      cout<<"Enter data which is to be searched"<<endl;
      cin>>d;
      s.search(d);
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

