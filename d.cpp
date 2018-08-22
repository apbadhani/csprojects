#include<iostream>
using namespace std;
int main()
{int num, f1, f2, f3;
cout<<"enter no of days: ";
cin>>num;
cout<<"converted no of days are :"<<endl;
if (num/365)
{f1=num/365;
f2=(f1%365)/7;
f3=f1%7;
}
else 
{f1=0;
f2=num/7;

f3=num%7;
}
cout<<f1<<"years "<<f2<<"weeks "<<f3<<"days ";
return 0;
}
