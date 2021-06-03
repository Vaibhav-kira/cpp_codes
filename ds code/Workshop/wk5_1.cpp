#include<iostream>
using namespace std;
class Employee
{
public:
    int salary,hr;
    void getInfo(int a,int b)
    {
        salary = a;
        hr = b;
    }
    void AddSal()
    {
        if(salary<500)
            salary += 10;
    }
    void AddWork()
    {
        if(hr>6)
            salary += 5;
    }
};
int main()
{
    Employee vaibhav;
    int a,b;
    cout<<"Enter Salary of Vaibhav followed by number of hours work per day :- ";
    cin>>a>>b;
    vaibhav.getInfo(a,b);
    vaibhav.AddSal();
    cout<<"Salary after AddSal() is :- "<<vaibhav.salary<<endl;
    vaibhav.AddWork();
    cout<<"Salary after AddWork() is :- "<<vaibhav.salary<<endl;
    return 0;
}
