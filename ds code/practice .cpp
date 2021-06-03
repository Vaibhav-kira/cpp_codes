#include<iostream>
using namespace std;

int main(){
	cout<<"enter number of elements in stack\n";
	int n;
	cin>>n;
	int stack[n];
	int top;
	hell:
	cout<<"press\n1 for push\n2 for deletion\n3for display";
	int d;
	cin>>d;
	switch(d){
		case 1:{
			cout<<"enter no. of elements to insert:\n";
			int c;
			for(int i=0;i<c;i++){
				if(top==n){
					cout<<"stack is full\n";
				}
				else{
					cout<<"enter element\n";
					cin>>stack[top];
					top++;
					cout<<"element inserted\n";
				}
			}
			break;
		}
		case 2:{
			if(top==-1){
				cout<<"stack is empty\n";
			}
			else{
				top--;
			cout<<"element deleted\n";
			}
			break;
		}
		case 3:{
			cout<<"elements are:\n";
			for(int i=top;i<top;i--){
				cout<<stack[i]<<" ";
			}
			break;
		}
		default:{
			cout<<"invalid input\n";
			break;
		}
	}
	cout<<"do you want to continue\npress y \nelse press any key\n";
	string ch;
	cin>>ch;
	if(ch=="y"||"Y"){
		goto hell;
	}
	return 0;


}
