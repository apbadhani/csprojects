#include<iostream>
using namespace std;
int main()
{ int i,j,k;
for(i=0; i<5; i++)
{ 
{ for(k=5-i; k>0;k--)
cout<<" ";
}
for(j=0;j<5;j++)
{cout<<"*";
}
cout<<endl;
}
return 0;
}
