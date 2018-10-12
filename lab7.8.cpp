#include<iostream>
using namespace std;
int reverse(int c)
{int a,b;
a=c%10;
b=c/10;
cout<<a;
if(b<1)
return 1;
return reverse(b);
}
int main()
{int a;
cout<<"enter any no : ";
cin>>a;
reverse(a);
return 0;
}
