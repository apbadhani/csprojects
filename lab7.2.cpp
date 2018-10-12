#include<iostream>
using namespace std;
int next(int a,int b,int n,int i)
{
if (i==n) return 0;
else
cout<<a+b<<endl;
i++;
//a=a+b;
next(b,a+b,n,i);
}
int next(int,int,int,int);
int main()
{int n;
cout<<"insert no of terms for fibonacci sequence : ";
cin>>n;
next(0,1,n,1);
return 0;
}
 
