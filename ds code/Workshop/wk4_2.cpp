#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int calculatedaydate(string a)
{
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    if(a=="MONDAY")
    {
        return 0;
    }
    if(a=="TUESDAY")
    {
        return 1;
    }
    if(a=="WEDNESDAY")
    {
        return 2;
    }
    if(a=="THRUSDAY")
    {
        return 3;
    }
    if(a=="FRIDAY")
    {
        return 4;
    }
    if(a=="SATURDAY")
    {
        return 5;
    }
    if(a=="SUNDAY")
    {
        return 6;
    }
    return -1;
}
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
string nameday(int k)
{
    if(k==0)
    {
        return "Monday";
    }
    if(k==1)
    {
        return "Tuesday";
    }
    if(k==2)
    {
        return "Wednesday";
    }
    if(k==3)
    {
        return "Thrusday";
    }
    if(k==4)
    {
        return "friday";
    }
    if(k==5)
    {
        return "saturday";
    }
    if(k==6)
    {
        return "sunday";
    }
}
int main()
{
    string date,day_1_jan;
    cout<<"Enter date in dd/mm/yyyy format : - ";
    getline(cin,date);
    cout<<"Enter day on first January : - ";
    getline(cin,day_1_jan);
    int day_jan;
    day_jan = calculatedaydate(day_1_jan);
    if(day_jan == -1)
    {
        cout<<"Invalid Input";
        return 0;
    }
    string temp = "0";
    int a=-1,b=-1,c=-1;
    for(int i=0;i<date.size();i++)
    {
        temp += date[i];
        if(date[i+1]=='/')
        {
            if(a==-1)
            {
                a = stoi(temp);
            }
            else if(b==-1)
            {
                b = stoi(temp);
            }
            temp = "0";
            i+=1;
        }
    }
    c = stoi(temp);
    int dayspast = number_of_day(a,b,c);
    dayspast -= 1;
    cout<<endl<<endl<<endl;
    cout<<"Day on "<<date<<" If day on 1st january was "<<day_1_jan<<" should be ----->  "<<nameday(((dayspast%7)+day_jan)%7);
    return 0;
}
