#include<iostream>
using namespace std;
static int maxc=0;
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
void max(Node* root)
{
	if(root!=NULL)
	{
		max(root->left);                 
		if(maxc<root->data)                       
		{
			maxc=root->data;	
        }          
		max(root->right);
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
	max(root);
	cout<<"Biggest element in tree is : - "<<maxc;
	return 0;
}


