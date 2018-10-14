#include<iostream>
using namespace std;
int largest(int arr[],int n)
{int c,la;
c=arr[0];
for(int i=1;i<n;i++)
{if(c>arr[i])
la=c;
else la=arr[i];}
return la;
}
int smallest(int arr[],int m)
{int a,sm;
a=arr[0];
for(int i=1;i<m;i++)
{if(sm<arr[i])
sm=a;
else sm=arr[i];}
return sm;
}
float mean(int arr[],float m)
{float b=0;
for(int i=0;i<m;i++)
b=b+arr[i];
return b/m;
}
int median(int arr[],int m)
{if(m%2==0)
cout<<arr[m/2]<<","<<arr[m/2-1];
else cout<<arr[(m-1)/2];
return 0;}
int highfre(int arr[],int m)        //in case of equal frequency this function will show the value which is greater//
{int c,n[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},u=0,h,a;
for(int i=0;i<m;i++)
{c=arr[i];
for(int j=0;j<m;j++)
{if(c==arr[j])
n[i]=n[i]+1;
}
if(u>n[i])
{h=u;
a=i;}
else {h=n[i];
a=i;}}
return arr[a];
}
int main()
{int m,ap[20];
cout<<"size of array(less than 20): ";
cin>>m;
cout<<"enter the elements in the array(less than 20):";
for(int i=0;i<m;i++)
cin>>ap[i];
cout<<"largest element is :"<<largest(ap,m)<<endl;
cout<<"smallest element is :"<<smallest(ap,m)<<endl;
cout<<"mean(average) of the elements is :"<<mean(ap,m)<<endl;
cout<<"median value in the array :";
median(ap,m);
cout<<endl<<"highest frequency value is :"<<highfre(ap,m);
return 0;
} 

