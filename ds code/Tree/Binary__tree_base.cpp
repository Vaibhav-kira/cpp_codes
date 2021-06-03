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
int main()
{
	Node* root = new Node();
	return 0;
}

