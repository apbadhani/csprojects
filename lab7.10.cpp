#include<iostream>
using namespace std;
int reverse(int c,int m)
{int a,b;
a=c%10;
b=c/10;
m=m*10+a;
if(b<1)
return m;
return reverse(b,m);
}
int main()
{int a;
cout<<"enter any no : ";
cin>>a;
if(reverse(a,0)==a)
cout<<"it is a palindrome";
else cout<<"it is not a palindrome";             //0 is for initial value of m//
return 0;
}
