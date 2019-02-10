#include<iostream>
using namespace std;

int partition(int *A, int start, int end) 
   { int pivot = A[end];
    int pIndex = start; 
//partition as initial
    for (int i=start;i<end;i++)
      {  if (A[i]<= pivot){
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[end]);
    return pIndex;
    }

void QuickSort(int *A, int start, int end)
{
    if (start < end){
        int pIndex = partition(A,start,end);
        QuickSort(A,start,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }
}

int main(){
    int B[] = {5,4,3,7,6,9,10};
    QuickSort(B,0,7);
    for (int j=0;j<7;i++){
        cout<<A[i]<<" ";
    }
}
