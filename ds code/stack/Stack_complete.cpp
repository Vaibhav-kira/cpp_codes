#include<iostream>
using namespace std;
class Stack
{
	int array[10000];
	public:
	int top;
	Stack()
	{
		top=-1;
	}
	void push(int x)
	{
		if(top >= 100 - 1)
		{
			cout<<"Stack overflow"<<endl;
		}
		else
		{
			array[++top]=x;
			cout<<x<<"  Value inserted sucessfully"<<endl;
		}
	}
	void pop()
	{
		if(top<0)
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			cout<<array[top]<<"  Pooped from stack"<<endl;
			top--;
		}
	}
	void peek()
	{
		if(top<0)
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			cout<<array[top]<<"  is present at top"<<endl;
		}
	}
	bool isempty()
	{
		return (top < 0);
	}
  void display()
  {
    for(int i=0;i<=top;i++)
    {
      cout<<"A["<<i<<"]  :- "<<array[i]<<endl;
    }
  }
	
};
int main()
{
	class Stack s;
	int n,i,j,k;
  cout<<"Enter number of inputs required initially in stack"<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"Enter input"<<endl;
    cin>>j;
    s.push(j);
  }
  start:
  cout<<"Select one function to perform"<<endl;
  cout<<"1. insert/push a number"<<endl;
  cout<<"2. pop out the number"<<endl;
  cout<<"3. To peek"<<endl;
  cout<<"4. display"<<endl;
  cout<<"5. End the program"<<endl;
  cin>>k;
  switch(k)
  {
    case 1:
    {
      cout<<"Enter the number which in to be pushed"<<endl;
      cin>>n;
      s.push(n);
      break;
    }
    case 2:
    {
      s.pop();
      break;
    }
    case 3:
    {
      s.peek();
      break;
    }
    case 4:
    {
      s.display();
      break;
    }
    case 5:
    {
      return 0;
      break;
    }
    default:
    {
      cout<<"Invalid input"<<endl;
      goto start;
    }
  }
  cout<<"Do you want to continue (y/n)"<<endl;
  char c;
  cin>>c;
  if(c=='n')
  {
    return 0;
  }
  goto start;
  return 0;
}
