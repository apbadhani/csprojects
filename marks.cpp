#include<iostream>
using namespace std;
int main()
{float f1, f2, f3, f4, f5, total;
cout<<"enter marks of 1st student(out of 100): ";
cin>>f1;
cout<<endl<<"enter marks of 2nd student(out of 100): ";
cin>>f2;
cout<<endl<<"enter marks of 3rd student(out of 100): ";
cin>>f3;
cout<<endl<<"enter marks of 4th student(out of 100): ";
cin>>f4;
cout<<endl<<"enter marks of 5th student(out of 100): ";
cin>>f5;
total=f1+f2+f3+f4+f5;
cout<<"total marks:"<<total<<endl;
cout<<"average marks:"<<total/5<<endl;
cout<<"percentage:"<<total/5<<"%";
return 0;
}
