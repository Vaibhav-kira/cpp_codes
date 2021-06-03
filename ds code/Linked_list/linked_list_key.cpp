#include <iostream>
using namespace std;
class Node
{
  public:
    int key;
    int data;
    Node* next;

    Node()
    {
      key=0;
      data=0;
      next=NULL;
    }
    Node(int k,int d)
    {
      key=k;
      data=k;
    }

};
class Singlylinkedlist{
  public :
    Node* head;
    Singlylinkedlist()
    {
      head=NULL;
    }

    Singlylinkedlist(Node *n)
    {
      head=n;
    }
// if node exist using key
    Node* nodeexist(int k)
    {
      Node* temp=NULL;
      Node* ptr=head;
      while(ptr!=NULL)
      {
        if(ptr->key==k)
        {
          temp=ptr;
        }
        ptr=ptr->next;
      }
      return temp;
    }
//Append node
    void appendNode(Node *n)
    {
      if(nodeexist(n->key)!=NULL)
      {
        cout<<"Cannot add this node as key is already present"<<endl;
      }
      else
      {
        if(head==NULL)
        {
          head = n;
          cout<<"node appended"<<endl;
        }
        else
        {
          Node* ptr=head;
          while(ptr->next!=NULL)
          {
            ptr=ptr->next;
          }
          ptr->next=n;
          cout<<"node appended"<<endl;
        }
      }
    }
// Prepend
    void prependnode(Node* n)
    {
      if(nodeexist(n->key)!=NULL)
      {
        cout<<"Cannot add this node as key is already present"<<endl;
      }
      else
      {
        n->next=head;
        head=n;
        cout<<"Node prepended"<<endl;
      }
    }
// Insert Node after a particular node
    void insertnodeafter(int k,Node *n)
    {
      Node* ptr = nodeexist(k);
      if(ptr==NULL)
      {
        cout<<"Node does not exist use another key"<<endl;
      }
      else
      {
        if(nodeexist(n->key)!=NULL)
        {
          cout<<"Cannot add this node as key is already present"<<endl;
        }
        else
        {
          n->next=ptr->next;
          ptr->next=n;
          cout<<"Node inserted"<<endl;
        }
      }
    }
// Deleting Node
    void deletenode(int k)
    {
      if(head==NULL)
      {
        cout<<"singly list link already empty cannot delete"<<endl;
      }
      else if(head!=NULL)
      {
        if(head->key==k)
        {
          head=head->next;
          cout<<"Node unlinked "<<endl;
        }
        else
        {
          Node * temp = NULL;
          Node * prevptr = head;
          Node * currentptr = head -> next;
          while (currentptr != NULL) {
            if (currentptr -> key == k) {
              temp = currentptr;
              currentptr = NULL;
            } else {
              prevptr = prevptr -> next;
              currentptr = currentptr -> next;
            }
          }
          if (temp != NULL) {
            prevptr -> next = temp -> next;
            cout << "Node UNLINKED with keys value : " << k << endl;
          } else {
            cout << "Node Doesn't exist with key value : " << k << endl;
          }
        }
      }
    }
// update node
  void updateNodeByKey(int k, int d) {

    Node * ptr = nodeexist(k);
    if (ptr != NULL) {
      ptr -> data = d;
      cout << "Node Updated" << endl;
    } else {
      cout << "Node Doesn't exis"<< endl;
    }

  }
//printing
  void printList() {
    if (head == NULL) {
      cout << "No Nodes in Linked List";
    } else {
      cout << endl << "Linked List Values : ";
      Node * temp = head;

      while (temp != NULL) {
        cout << "(" << temp -> key << "," << temp -> data << ") --> ";
        temp = temp -> next;
      }
    }

  }

};
int main() {
Singlylinkedlist s;
int selection;
int key,k,data;
start:
    cout <<endl<<"1. appendNode()" << endl<< "2. prependNode()" << endl<< "3. insertNodeAfter()" << endl<< "4. deleteNodeByKey()" << endl<< "5. updateNodeByKey()" << endl << "6. print()" << endl<< "7 END" << endl ;
    cin>>selection;
    Node *n=new Node();
    switch(selection)
    {
      case 1:
      {
        cout << "Append Node Operation Enter key & data of the Node to be Appended" << endl;
        cin>>key>>data;
        n->key=key;
        n->data=data;
        s.appendNode(n);
        break;
      }
      case 2:
      {
        cout<<"Prepend node Enter key and data"<<endl;
        cin>>key>>data;
        n->key=key;
        n->data=data;
        s.prependnode(n);
        break;
      }
      case 3:
      {
        cout<<"Insert node after selected node Enter the key of selected node"<<endl;
        cin>>k;
        cout<<"Enter the key and data of node that is to be inserted"<<endl;
        cin>>key>>data;
        n->key=key;
        n->data=data;
        s.insertnodeafter(k,n);
        break;
      }
      case 4:
      {
        cout<<"Enter the key ehich is to be deleted"<<endl;
        cin>>key;
        s.deletenode(key);
        break;
      }
      case 5:
      {
        cout<<"Update by key enter the key of list and data"<<endl;
        cin>>k>>data;
        s.updateNodeByKey(k,data);
        break;
      }
      case 6:
      {
        s.printList();
        break;
      }
      case 7:
      {
        return 0;
        break;
      }
    }
    goto start;

  return 0;
}
