#include<iostream>
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
void size(Node* root)
{
	if(root!=NULL)
	{
		size(root->left);                 
		count++;                                                   // Time : - O(n)
		size(root->right);                                         // Space : - Width of the tree at any time we have total width of elements not sure ....
	}
}
int size_way(Node* root)
{
	if(root==NULL)
	{
		return 0;                                                   // Time : - O(n)
	}                                                               // Space : - O(h)  at a time maximum data will be 5 -> 6 -> 66 -> NULL (h+1) i.e. auxilary =O(h)
	return 1 + size_way(root->left) + size_way(root->right);
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
	size(root);
	cout<<"Size of given binary tree is : - "<<count<<endl<<"Through another/better way : - "<<size_way(root);
	return 0;
}


