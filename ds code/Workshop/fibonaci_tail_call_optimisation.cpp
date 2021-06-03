#include <iostream>
using namespace std;
int fib(int n,int k=1,int l=1)
{

  if(n==0||n==1){return l;}
  else{return fib(n-1,l,k+l);}
}
int main() {
  cout<<"fin(0) :- "<<fib(0)<<endl;
  cout<<"fin(1) :- "<<fib(1)<<endl;
  cout<<"fin(2) :- "<<fib(2)<<endl;
  cout<<"fin(3) :- "<<fib(3)<<endl;
  cout<<"fin(4) :- "<<fib(4)<<endl;
}
