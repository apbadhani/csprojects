#include<iostream>
using namespace std;
class rectangle
 { public:
   float length, breadth;
   // Member functions declaration
   float area();
   float perimeter();
   void getlength(float len);
   void getbreadth(float wid);
 };
   // Member functions definitions
   float rectangle::area(void)
     { return length*breadth;
     }
   float rectangle::perimeter(void)
     {return 2*(length+breadth);
     }
   void rectangle::getlength(float len)
    {length=len;
    }
   void rectangle::getbreadth(float wid)
    {breadth=wid;
    }
int main()
{ rectangle r1,r2;
  float l1,w1,l2,w2,area1,area2,peri1,peri2;
 cout<<"enter length of rectangle 1 : ";
 cin>>l1;
 r1.getlength(l1);
  cout<<"enter breadth of rectangle 1 : ";
 cin>>w1;
r1.getbreadth(w1);
 cout<<"enter length for rectangle 2 : ";
 cin>>l2;
r2.getlength(l2);
  cout<<"enter breadth of rectangle 2 : ";
 cin>>w2;
r2.getbreadth(w2);
 area1=r1.area();
 area2=r2.area();
 peri1=r1.perimeter();
 peri2=r2.perimeter();
cout<<endl<<"area of rectangle 1 is :"<<area1;
 cout<<endl<<"area of rectangle 2 is :"<<area2;
 cout<<endl<<"perimeter of rectangle 1 is :"<<peri1;
 cout<<endl<<"perimeter of rectangle 2 is :"<<peri2;
return 0;
}
