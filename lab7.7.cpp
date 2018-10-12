#include<iostream>
using namespace std;
int reverse(int c,int m)
{int a,b;
a=c%10;
b=c/10;
m=m+a;
if(b<1)
{return m;}
return reverse(b,m);
}
int main()
{int a;
cout<<"enter any no : ";
cin>>a;
cout<<reverse(a,0);
return 0;
}
