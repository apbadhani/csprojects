#include<iostream>
using namespace std;
int sum(int arr[],int n)
{int c=0;
for(int i=0;i<n;i++)
c=c+arr[i];
return c;
}
int main()
{int ap[30],m;                               
cout<<"size of array(less than 30) : ";
cin>>m;
cout<<"enter the elements of array(less than 30) : ";
for(int i=0;i<m;i++)
cin>>ap[i];
cout<<"the sum of elements of the array is : "<<sum(ap,m);
return 0;
}
 
