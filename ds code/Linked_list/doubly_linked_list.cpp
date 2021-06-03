#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* previous;
    Node()
    {
        next=NULL;
        previous=NULL;
    }
    Node(int d,Node* a=NULL,Node* b=NULL)
    {
        data=d;
        next=a;
        previous=b;
    }
};
class doublylinklist
{
public:
    Node* head;
    doublylinklist()
    {
        head=NULL;
    }
    doublylinklist(Node* n)
    {
        head=n;
    }
    // check if data exist
    Node* checkifdataexist(int d)
    {
        Node* temp=NULL;
        Node* ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==d)
            {
                temp=ptr;
                break;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    //Append
    void append(Node* n)
    {
        Node* temp=head;
        if(head==NULL)
        {
            head=n;
            cout<<"Node appended"<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            n->previous=temp;
            temp->next=n;
            cout<<"Node appended"<<endl;
        }
    }
    // prepend
    void prepend(Node* b)
      {
        b->next=head;
        head->previous=b;
        head=b;
        cout<<"Node prepeded"<<endl;
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
            cout<<"("<<ptr->data<<")"<<"   <----->   ";
            ptr = ptr -> next;
        }
        cout<<"NULL"<<endl;
    }
  }
};
int main()
{
    doublylinklist s;
    int op,d;
    start:
    cout<<"1 for append"<<endl<<"2 for prepend"<<endl<<"3 for delete"<<endl<<"4 for display"<<endl<<"5 to end"<<endl;
    cin>>op;
    Node *a=new Node();
    switch(op)
    {
    case 1:
        {
            int data;
            cout<<"Enter data which is to appended"<<endl;
            cin>>data;
            a->data=data;
            s.append(a);
            break;
        }
    case 2:
        {
            cout<<"Enter data which is to be prepended"<<endl;
            cin>>d;
            a->data=d;
            s.prepend(a);
            break;
        }
    case 4:
        {
            s.print();
            break;
        }
    case 5:
        {
            return 0;
        }
    default:
        {
            return 0;
        }
    }
    goto start;
}
