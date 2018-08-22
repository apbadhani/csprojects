#include<iostream>
using namespace std;
int main()
{float num1, num2, num3; 
cout<<"enter principal(in Rs): ";
cin>>num1;
cout<<endl<<"enter rate of interest(in %): ";
cin>>num2;
cout<<endl<<"enter time :(in years)";
cin>>num3;
cout<<endl<<"compound interst for the given data is :"<<num1+(num1*num2*num3)/100;
return 0;
}
