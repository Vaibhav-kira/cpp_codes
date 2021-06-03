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
void inorder(Node* root)  //recursive method;
{
	if(root!=NULL)
	{
		inorder(root->left);                 //Time complexity = O(n)
		cout<<root->data<<"      ";          //Space complexity = O(h)  h= height of tree i.e no. of nodes from root node to leaf node ( h+1 to be exact )
		inorder(root->right);
	}
}
void preorder(Node* root)
{
	if(root!=NULL)
	{
		cout<<root->data<<"      ";         // Time complexity =  Same as inorder
		preorder(root->left);               // Space complexity = Same as inorder
		preorder(root->right);
	}
}
void postorder(Node* root)
{
	if(root!=NULL)
	{
		postorder(root->left);              // Same  to be precise in all it is theta as it is exact .... 
		postorder(root->right);             // Same
		cout<<root->data<<"      ";
	}
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
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	return 0;
}


