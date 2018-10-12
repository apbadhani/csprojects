#include<iostream>
using namespace std;
int fac(int n)
{if (n<1)
return 1;
else return n*fac(n-1);
}
int main()
{int u;
cout<<"enter no for its factorial : ";
cin>>u;
cout<<fac(u);
return 0;
}


