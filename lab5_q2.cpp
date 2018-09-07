#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please enter 1st side ";
    cin>>a;
    cout<<"Please enter 2nd side ";
    cin>>b;
    cout<<"Please enter 3rd side ";
    cin>>c;
if(a==b&&b==c)
cout<<"the triangle is equilateral";
else if(a==b||b==c||c==a)
cout<<"the triangle is isosceles";
else cout<<"the triangle is scalene";    
    return 0;
}
