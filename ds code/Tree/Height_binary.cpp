#include<iostream>
#include<cmath>
using namespace std;
static int h=0;
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
int height(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return max(height(root->left),height(root->right)) + 1 ;
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
	cout<<"Height of treee is : - "<<height(root);
	return 0;
}


