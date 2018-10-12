#include<iostream>
using namespace std;
int even(int m)
{if(m>=0)
{
cout<<m<<",";
return even(m-2);
}
else return 0;
}
int odd(int a)
{if (a>=1)
{
cout<<a<<",";
return odd(a-2);
}
else
return 0;
}
int find(int n)
{if (n>=0){
cout<<"Even numbers are."<<endl;
if (n%2==0)
even(n);
else 
even(n-1);
cout<<"Odd numbers are."<<endl;
if(n%2==0)
odd(n-1);
else
odd(n);
}}

int main()
{int u;
cout<<"enter the range : ";
cin>>u;
find(u);
return 0;
}
