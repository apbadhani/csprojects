#include<iostream>
using namespace std;
int sum(int n)
{if (n==1)
return 1;
else return n+sum(n-1);}
int main()
{int u;
cout<<"enter the no for summation : ";
cin>>u;
cout<<"the sum is : "<<sum(u);
return 0;
}


