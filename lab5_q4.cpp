#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Please enter a number";
    cin>>a;
    if(a%5==0 &&a%11==0){cout <<a <<" is divisible by 5 and 11" <<endl;}
    else {cout<<"This number is not divisible by 5 and 11"<<endl;}
   return 0;
}
