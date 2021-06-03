#include <iostream>
#include<stack>
using namespace std;
int higher(int a){
  if(a=='^')return 3;
  else if(a=='*'||'/')return 2;
  else if(a=='+'||'-')return 1;
  return 0;
}

string inf_to_ptf(string exp ){
  string ptf;
  stack<char> s;
  for(int i=0;i<exp.length();i++){
    if((exp[i]>='a'&& exp[i]<='z')|| (exp[i]>='A'&& exp[i]<='Z') ){
      ptf= ptf+exp[i];
    }
    else if(exp[i]=='('||'['||'{'){
      s.push(exp[i]);
    }
    else if(exp[i]==')'||']'||'}'){
      while(s.top()!='('||'['||'{'){
        ptf += s.top();
        s.pop();
      }
      if(s.top()=='(')
		{
			s.pop();
		}
    }
    else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/' || exp[i]=='^'){
      if(s.empty()){
        s.push(exp[i]);
      }
      else if(higher(exp[i])<higher(s.top())){
        while((!s.empty())||(s.top()=='('||'['||'{')){
          ptf+=s.top();
          s.pop();
        }
        s.push(exp[i]);
      }
      else{
        s.push(exp[i]);
      }
    }
  }
  while(!s.empty()){
    ptf+=s.top();
    s.pop();
  }
return ptf;
}

int main(){
  string exp;
  getline(cin,exp);
  cout<<inf_to_ptf(exp);
  

}
