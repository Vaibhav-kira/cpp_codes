#include<iostream>
using namespace std;
class st
{
	public:
	int array[100];
	int top1,top2;
	st()
	{
		top1=-1;
		top2=101;
	}
	void push1(int x)
	{
		if(top1 >= 50)
		{
			cout<<"Stack overflow"<<endl;
		}
		else
		{
			array[++top1]=x;
			cout<<x<<"  Value inserted sucessfully"<<endl;
		}
	}
	void push2(int x)
	{
		if(top2 <= 50)
		{
			cout<<"Stack overflow"<<endl;
		}
		else
		{
			array[--top2]=x;
			cout<<x<<"  Value inserted sucessfully"<<endl;
		}
	}
	void pop1()
	{
		if(top1<0)
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			cout<<array[top1]<<"  Pooped from stack"<<endl;
			top1--;
		}
	}
	void pop2()
	{
		if(top2>100)
		{
			cout<<"Stack underflow"<<endl;
		}
		else
		{
			cout<<array[top2]<<"  Pooped from stack"<<endl;
			top2++;
		}
	}
	void display1()
   {
       for(int i=0;i<=top1;i++)
       {
            cout<<"A["<<i<<"]  :- "<<array[i]<<endl;
       }
   }
   void display2()
   {
   	   for(int i=100;i>=top2;i--)
   	   {
   	   	    cout<<"A["<<i<<"]  :- "<<array[i]<<endl;
		  }
   }
		
};
int main()
{
	st a;
	start:
		cout<<"Select function"<<endl<<"1. push1"<<endl<<"2. push2"<<endl<<"3. pop1"<<endl<<"4. pop2"<<endl<<"5. display1"<<endl<<"6. display2"<<endl<<"7. exit"<<endl;
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					int data;
					cout<<"Enter data"<<endl;
					cin>>data;
					a.push1(data);
					break;
				}
			case 2:
				{
					int data;
					cout<<"Enter data"<<endl;
					cin>>data;
					a.push2(data);
					break;
				}
			case 3:
				{
					a.pop1();
					break;
				}
			case 4:
				{
					a.pop2();
					break;
				}
			case 5:
				{
					a.display1();
					break;
				}
			case 6:
				{
					a.display2();
					break;
				}
			case 7:
				{
					return 0;
				}
			default:
				{
					cout<<"Invaid Input !!!!"<<endl;
				}
		}
		goto start;
	return 0;
}
