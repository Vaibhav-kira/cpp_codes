#include<iostream>
using namespace std;
class stringop
{
public:
    string Txt;
    void readstring()
    {
        getline(cin,Txt);
    }
    void caseconvert()
    {
        for(int i=0;i<Txt.size();i++)
        {
            if(Txt[i]<97)
            {
                Txt[i] += 32;
            }
            else
            {
                Txt[i] -= 32;
            }
        }
        return;

    }
    void circulardecode()
    {
        for(int i=0;i<Txt.size();i++)
        {
            if(Txt[i]<97)
            {
                Txt[i] += 32;
            }
            else
            {
                Txt[i] -= 32;
            }
            if(Txt[i]=='z')
            {
                Txt[i] = 'a';
            }
            else if(Txt[i]=='Z')
            {
                Txt[i] = 'A';
            }
            else
            {
                Txt[i] += 1;
            }
        }
        return;

    }
};
int main()
{
    stringop a;
    cout<<"Enter string : -  ";
    a.readstring();
    cout<<"String before changing case : - "<<a.Txt<<endl<<"String after changing case : - ";
    a.caseconvert();
    cout<<a.Txt<<endl;
    cout<<"String before circular code : - "<<a.Txt<<endl<<"String after circular code : - ";
    a.circulardecode();
    cout<<a.Txt<<endl;
    return 0;
}
