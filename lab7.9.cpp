#include<iostream>
using namespace std;
int even(int n)
{
if(n>0)
return n+even(n-2);
else if(n==0)
return 0;

}
int main()
{int u;
cout<<"enter a no : ";
cin>>u;
if(u%2==0)
even(u);
else even(u-1);
cout<<"sum of even no are in this range : "<<even(u);
return 0;
}
