#include<iostream>



using namespace std;






	int main () {

	int a;

	char b;

	bool c;

	long d;

	double e;



	int *a1 = &a;

	char *b1 = &b;

	bool *c1 = &c;

	long *d1 = &d;

	double *e1 = &e;



	cout<<"The size of a is "<<sizeof (a)<<endl;

	cout<<"The size of b is "<<sizeof (b)<<endl;

	cout<<"The size of c is "<<sizeof (c)<<endl;

	cout<<"The size of d is "<<sizeof (d)<<endl;
	 
	cout<<"The size of e is "<<sizeof (e)<<endl;



	cout<<endl;







	cout<<"The size of a is "<<sizeof (a1)<<endl;

	cout<<"The size of b is "<<sizeof (b1)<<endl;

	cout<<"The size of c is "<<sizeof (c1)<<endl;

	cout<<"The size of d is "<<sizeof (d1)<<endl;
	 
	cout<<"The size of e is "<<sizeof (e1)<<endl;


	}

	
