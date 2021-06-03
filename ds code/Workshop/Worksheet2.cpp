#include<iostream>
using namespace std;
int number_of_day(int day,int month,int year)
{
    int leap=0,number=0;
    if(year%400==0)
        leap=1;
    else if(year%100==0)
        leap=0;
    else if(year%4==0)
        leap=1;
    for(int i=1;i<month;i++)
    {
        if(i==2)
        {
            if(leap)
                number += 29;
            else
                number += 28;
        }
        else if((i%2==1&&i<=8)||(i%2==0&&i>=8))
            number += 31;
        else
            number += 30;
    }
    return number+day;
}
int main()
{
    int day,month,year;
    int test_cases;
    cout<<"Number of test cases : - ";
    cin>>test_cases;
    while(test_cases--)
    {
        cout<<"Enter the date in format Day month followed by year"<<endl;
        cin>>day>>month>>year;
        cout<<"number of day in this year :-  "<<number_of_day(day,month,year)<<endl<<endl;
    }
    return 0;
}
