#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
public:
    int row,column;
    vector<vector<int>> arr;
    Matrix()
    {
        row = 0;
        column = 0;
    }
    Matrix(int a,int b)
    {
        row = a;
        column = b;
    }
    void set_value(int a,int b)
    {
        for(int i=0;i<a;i++)
        {
            vector<int> temp;
            for(int j=0;j<b;j++)
            {
                int data;
                cin>>data;
                temp.push_back(data);
            }
            arr.push_back(temp);
        }

    }
    void operator+(Matrix x)
    {
        int k[row][row];
        cout<<"matrix after addition is ----- >"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row;j++)
            {
                k[i][j] = arr[i][j] + x.arr[i][j];
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row;j++)
            {
                cout<<k[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
    void operator*(Matrix x)
    {
        int k[row][row];
        cout<<"matrix after multiplication is ----- >"<<endl;
        for (int i = 0; i < arr.size(); i++)
        {

            for (int j = 0; j < arr[i].size(); j++)
            {
                k[i][j] = 0;

                for (int k1 = 0; k1 < arr[i].size(); k1++)
                {
                    k[i][j] += arr[i][k1]*(x.arr[k1][j]);
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row;j++)
            {
                cout<<k[i][j]<<"   ";
            }
            cout<<endl;
        }

    }

};
int main()
{
    int row,column;
    cout<<"Enter number of row and column -- < ";
    cin>>row>>column;
    Matrix m1(row,column);
    Matrix m2(row,column);
    cout<<"enter the values in matrix 1  "<<endl;
    m1.set_value(row,column);
    cout<<"enter the values in matrix 2  "<<endl;
    m2.set_value(row,column);
    m1 + m2;
    m1*m2;
}
