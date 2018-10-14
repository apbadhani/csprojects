#include<iostream>
using namespace std;
int klarge(int arr[],int size,int k)
{int ar1[20],u,temp;
for(int j=0;j<size;j++)
{for(int i=0;i<size;i++)
{if(arr[i+1]>arr[i])
{temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;}
}}
cout<<k<<"th largest element : "<<arr[k]<<endl; 
cout<<k<<"th smallest element : "<<arr[size-(k-1)];
return 0;
}
int main()
{int ar[20],u,n;
cout<<"size of array : ";
cin>>n;
cout<<"enter the elements of the array : ";
for(int i=0;i<n;i++)
cin>>ar[i];
cout<<"enter the value of n(for nth largest and smallest element) :";
cin>>u;
klarge(ar,n,u);
return 0;
}

