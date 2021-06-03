#include<iostream>
#include<stack>
using namespace std;
static int count=0;
class Node
{
	public:
		int data;
		Node* right;
		Node* left;
		Node()
		{
			right=NULL;
			left=NULL;
		}
		Node(int k)
		{
			data=k;
			right=NULL;
			left=NULL;
		}
};
void inorder(Node* root)                 //time complexity  = theta(n)
{                                        //space = O(h)  every time left left which cann never be more than height of the tree;
	stack<Node*> s;
	Node* temp=root;
	while(temp!=NULL||s.empty()==false)
	{
		while(temp!=NULL)
		{
			s.push(temp);
			temp=temp->left;
		}
		temp=s.top();
		s.pop();
		cout<<temp->data<<"  ";
		temp=temp->right;
	}
}
void preorder(Node* root)           // O(n) for both
{
	if(root==NULL)
	{
		return;
	}
	stack<Node*> s;
	s.push(root);
	while(!s.empty())
	{
		Node* temp=s.top();
		s.pop();
		cout<<temp->data<<"  ";
		if(temp->right!=NULL)
		{
			s.push(temp->right);
		}
		if(temp->left!=NULL)
		{
			s.push(temp->left);
		}
	}
}
void preorder_opti(Node* root)
{
	
}
int main()
{
	Node* root = new Node(5);
	Node* A = new Node(10);             /*             5             */
	root->right = A;                    /*           /   \           */
	Node* B=new Node(6);                /*          /     \          */
	root->left = B;                     /*         6      10         */
	A->right = new Node(2);              /*       /  \    /  \       */
	A->left = new Node(15);              /*      66  25  15  2       */
	B->right = new Node(25);
	B->left = new Node(66);
	cout<<"Inorder of given tree is : - ";
	inorder(root);
	cout<<endl<<"Preorder of given tree is : - ";
	preorder(root);
	cout<<endl<<"postorder of giver tree is : - ";
	//postorder(root);
	return 0;
}


