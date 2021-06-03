#include<iostream>
using namespace std;
void Merge(int A[], int l, int mid, int r) {
   int i, j, k, nl, nr;
   nl = mid-l+1;
   nr = r-mid;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
   {
       larr[i] = A[l+i];
   }
   for(j = 0; j<nr; j++)
    {
        rarr[j] = A[mid+1+j];
    }
   i = 0;
   j = 0;
   k = l;
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         A[k] = larr[i];
         i++;
      }else{
         A[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {
      A[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {
      A[k] = rarr[j];
      j++; k++;
   }
}
void MergeSort(int A[], int l, int r) {
   int m;
   if(l < r) {
      int m = (l+r)/2;
      MergeSort(A, l, m);
      MergeSort(A, m+1, r);
      Merge(A, l, m, r);
   }
}
int main()
{
    int n,i;
    cout<<"Enter no. of elemennts in array which is to be sorted"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    int A[n];
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]    :- ";
        cin>>A[i];
    }
    MergeSort(A, 0, n-1);
    cout << "Array after Sorting: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]    :- ";
        cout<<A[i]<<endl;
    }
}
