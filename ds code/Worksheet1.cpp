#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter name of user"<<endl;
  string Name,uid;
  getline(cin,Name);
  cout<<"Enter uid of user"<<endl;
  getline(cin,uid);
  cout<<"Enter number of elements in array"<<endl;
  cin>>n;
  int A[n];
  cout<<"Enter the elements of array A[]"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>A[i];
  }
  menu:
  cout<<endl<<"*********************************************************************************************************"<<endl<<"Select an option from below menu to be perform of array"<<endl;
  cout<<"1. Insert a new element at end as well as at a given position."<<endl<<"2. Delete an element from a given whose value is given or whose position is given"<<endl<<"3. To find the location of a given element."<<endl<<"4. To display the elements of the linear array."<<endl<<"5. To end the program"<<endl;
  int mn;
  cout<<"enter the selection"<<endl;
  cin>>mn;
  switch(mn){
    case 1:
      cout<<"1 is selected"<<endl;
      cout<<"Enter the element that needs to be inserted"<<endl;
      int ele,pos;
      cin>>ele;
      cout<<"Enter the position at which element needs to be inserted"<<endl;
      cin>>pos;

      for(int i=n-1;i>=pos;i--)
      {
        A[i+1]=A[i];
      }
      A[pos]=ele;
      n++;
      goto menu;
    case 2:
      cout<<"2 is selected"<<endl;
      bala:
      cout<<"If value of the element is given who is to be deleted enter :- 1"<<endl<<"If position of the element is given who is to be deleted enter :- 2"<<endl;
      int select;
      cin>>select;
      switch(select){
        case 1:
          cout<<"Enter the value of element which is to be deleted"<<endl;
          int ele;
          cin>>ele;
          for(int i=0;i<n;i++)
          {
            if(A[i]==ele)
            {
              for(int j=i;j<n;j++)
              {
                A[j]=A[j+1];
              }
            }
          }
          n--;
          goto menu;
        case 2:
        cout<<"Enter the position which is to be deleted"<<endl;
        int pos;
        cin>>pos;
        for(int i=pos;i<n-1;i++)
          {
              A[pos]=A[pos+1];
          }
        n--;
        goto menu;
        default:
        cout<<"wrong input try again"<<endl;
        goto bala;
      }
    case 3:
      cout<<"3 is selected"<<endl;
      cout<<"enter the element which is to be searched"<<endl;
      int element;
      cin>>element;
      for(int i=0;i<n;i++)
      {
        if(A[i]==element)
        {
          cout<<"Element "<<element<<"is present at :- "<<"A["<<i<<"]"<<endl;
          goto menu;
        }
      }
      cout<<"element not present"<<endl;
      goto menu;
    case 4:
      cout<<"4 is selected"<<endl;
      for(int i=0;i<n;i++)
      {
        cout<<"A["<<i<<"]  :-  "<<A[i]<<endl;
      }
      goto menu;
    case 5:
      cout<<"All the operations are performed by :- "<<Name<<"    UID :- "<<uid<<endl;
      cout<<"*******************PROGRAM ENDS*******************"<<endl;
      return 0;
    default :
      cout<<"Invalid input try again"<<endl;
      goto menu;
  }
}

