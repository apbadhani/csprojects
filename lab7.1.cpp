#include<iostream>
using namespace std;
int n;
int re(int num,int i)
{
if (i>num)
return 1;
else 
cout<<i<<endl;
i++;
re(n,i);
}
int re(int,int);
int main()
{
cout<<"insert number : ";
cin>>n;
re(n,1);
return 0;

}
