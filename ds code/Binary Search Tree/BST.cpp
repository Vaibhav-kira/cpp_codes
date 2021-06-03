#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* right;
		Node* left;
		Node()
		{
			right=nullptr;
			left=nullptr;
		}
		Node(int k)
		{
			data=k;
			right=nullptr;
			left=nullptr;
		}
};
Node* createNode(int data)
{
    Node* temp = new Node();
    temp->data=data;
    temp->left=nullptr;
    temp->right=nullptr;
    return temp;
}
void inorder(Node* root)
{
	if(root!=nullptr)
	{
		inorder(root->left);
		cout<<root->data<<"      ";
		inorder(root->right);
	}
}
class BST
{
public:
    Node* root = nullptr;
    int data;
    int flag=0;
	void addElement(int data)
	{
	    Node* temp = createNode(data);
	    if(root==nullptr)
        {
            root=temp;
            return;
        }
        Node* temp2 = root;
        Node* temp3;
        while(temp2!=nullptr)
        {
            temp3=temp2;
            if(temp->data<temp2->data)
            {
                flag=1;
                temp2=temp2->left;
            }
            else if(temp->data>temp2->data)
            {
                flag=2;
                temp2=temp2->right;
            }
        }
        if(flag==1)
        {
            temp3->left=temp;
        }
        else if(flag==2)
        {
            temp3->right=temp;
        }
        return;
	}
	void print()
	{
	    inorder(root);
	}
	bool finding(int data)
	{
	    Node* temp = root;
	    while(temp!=nullptr)
        {
            if(data==temp->data)
            {
                return true;
            }
            else if(data<temp->data)
            {
                temp=temp->left;
            }
            else if(data>temp->data)
            {
                temp=temp->right;
            }
        }
        return false;
	}

	void deleting(int data)
	{
	    Node* temp = root;
	    while(temp!=nullptr)
        {
            if(data==temp->data)
            {
                break;
            }
            else if(data<temp->data)
            {
                temp=temp->left;
            }
            else if(data>temp->data)
            {
                temp=temp->right;
            }
        }
	}
};
int main()
{
    BST b;
    int n,data;
    cout<<"Enter total number of elements in BST"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)                            /*                 21                                  */
    {                                               /*                /    \                               */
        cout<<"Enter the data to be inserted"<<endl;/*              16     29                              */
	    cin>>data;                                  /*             /   \   /  \                            */
        b.addElement(data);                         /*            11   19 23   90                          */
    }
    cout<<endl<<endl;
    b.print();
    cout<<endl<<endl;
    cout<<"Enter data to be searched"<<endl;
    cin>>data;
    if(b.finding(data))
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
    cout<<endl<<endl;
    cout<<"Enter data to be searched"<<endl;
    cin>>data;
    if(b.finding(data))
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
    cout<<endl<<endl;
    cout<<"Enter element to be deleted "<<endl;
    cin>>data;
    if(!b.finding(data))
    {
        cout<<"Element is not present in BST cannot be deleted"<<endl;
    }
    else
    {
        b.deleting(data);
    }
	return 0;
}


