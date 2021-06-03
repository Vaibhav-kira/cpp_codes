#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int A[], int l, int h)
{
    int p = A[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {
        if (A[j] <= p)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[h]);
    return (i + 1);
}
void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int ele = partition(A, l, h);
        quickSort(A, l, ele - 1);
        quickSort(A, ele + 1, h);
    }
}
int main()
{
    int n,i=0;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]  :-  ";
        cin>>A[i];
    }
    start:
    cout<<"1. For bubble sort"<<endl<<"2. For quick sort"<<endl;
    int se;
    cin>>se;
   switch(se)
   {
   case 1:
    {
        int j=0;
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
        break;
    }
   case 2:
    {
        quickSort(A, 0, n-1);
        break;
    }
   default:
    {
        cout<<"Invalid selection try again"<<endl;
        goto start;
    }
   }
   cout<<"Elements of array are :- "<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"A["<<i<<"]  :-  ";
            cout<<A[i]<<endl;
        }

}
