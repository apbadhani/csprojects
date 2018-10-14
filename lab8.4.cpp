#include<iostream>
using namespace std;
int lasm(int arr1[],int arr2[],int size1,int size2)
{int arr3[size1+size2],u,c,la,sm;
u=size1+size2;
for(int i=0;i<size1;i++)
arr3[i]=arr1[i];
for(int j=0;j<size2;j++)
arr3[size1+j]=arr2[j];
c=arr3[0];
for(int m=1;m<u;m++)
{if(c>arr3[m])
{la=c;
sm=arr3[m];}
else {la=arr3[m];
sm=c;}}
cout<<"the largest value is : "<<la<<endl;
cout<<"the smallest value is : "<<sm; 
return 0;
}
int main()
{int a[50],b[50],m,n;
cout<<"size of array 1:";
cin>>m;
cout<<"enter elements of array 1:";
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"size of array 2:";
cin>>n;
cout<<"enter elements of array 2:";
for(int j=0;j<n;j++)
cin>>b[j];
lasm(a,b,m,n);
return 0;
}


