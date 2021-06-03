#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
	int n,j,k,i;
	cout<<"Enter no. of element in array"<<endl;
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
    for(i=0;i<n;i++)
    {
        int flag=1;
        for(j=0;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    /*for(i=0;i<n+1;i++)
    {
    	cout<<A[i]<<endl;
	}*/
	for(i=1;i<n;i++)
	{
		if(A[i]==A[i+1])
		{
			continue;
		}
		cout<<A[i]<<" ====>  "<<A[i+1]<<endl;
	}
	cout<<A[n]<<" ===> "<<" NA "<<endl;
	return 0;
}
