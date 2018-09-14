//include library
#include <iostream>
using namespace std;

/*Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum*/

int max(int a, int b){
	int maximum;
	if (a>b) { maximum = a;
			return maximum; }
	else {maximum = b;
			return maximum; }
}

/* Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.*/

void max2(int a, int b, int &c) {
	if (a>b) { c = a; }
	else {c = b;}
}
/* The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum. */
int main() {
	int a, b, c, maximum;
		cout << "Welcome to question 3" << endl;
		cout << "What is the 1st number: " << endl;
		cin >> a ;
		cout << "What is the 2nd number: " <<endl;
		cin >> b ;
	c = max(a,b) ;
		cout << "The maximum of them is " << c << endl;

	max2(a,b,maximum);
		cout << "The maximum is " << maximum << endl;
return 0;
}	