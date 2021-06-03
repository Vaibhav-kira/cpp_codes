#include<iostream>
#include<stack>
using namespace std;
int precedence(char pre) 
{ 
    if(pre == '^') 
    return 3; 
    else if(pre == '*' || pre == '/') 
    return 2; 
    else if(pre == '+' || pre == '-') 
    return 1; 
    else
    return -1; 
}
string infix_to_postfix(string infix)
{
	string postfix;
	stack <char> s;
	for(int i=0;i<infix.length();i++)
	{
		if((infix[i] >= 'a'&& infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z'))//for int type condition is infix[i] >= '1'&& infix[i] <= 1'2' no other change required.
		{
			postfix+=infix[i];
		}
		else if(infix[i]=='(')
		{
			s.push('(');
		}
		else if(infix[i]==')')
		{
			while((s.top()!='(') && (!s.empty())) 
			{
				char temp=s.top();
				postfix+=temp;
				s.pop();
			}
			if(s.top()=='(')
			{
				s.pop();
			}
		}
		else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^')
		{
			if(s.empty())
			{
				s.push(infix[i]);
			}
			else
			{
				if(precedence(infix[i])>precedence(s.top()))
				{
					s.push(infix[i]);
				}
				else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
				{
					s.push(infix[i]);
				}
				else
				{
					while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
					{
						postfix+=s.top();
						s.pop();
					}
					s.push(infix[i]);
				}
			}
		}
	}
	while(!s.empty())
	{
		postfix+=s.top();
		s.pop();
	}
	return postfix;
}
int main()
{
	string infix_1,postfix_1;
	cout<<"Enter a infix expression"<<endl;
	cin>>infix_1;
	cout<<"Infix expression  :- "<<infix_1<<endl;
	postfix_1=infix_to_postfix(infix_1);
	cout<<endl<<"Postfix expression is  :-   "<<postfix_1<<endl;
	return 0;
}
