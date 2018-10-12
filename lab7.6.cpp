#include<iostream>
using namespace std;
int power(int u,int n)
{if (n>0)
return u*power(u,n-1);
else return 1;}
int main()
{int a,b;
cout<<"enter the no:";
cin>>a;
cout<<"enter its power:";
cin>>b;
cout<<"result is : "<<power(a,b);
return 0;}

