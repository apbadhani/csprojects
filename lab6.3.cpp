//include library
#include <iostream>
using namespace std;

/*Write a program with a function that takes two int parameters, finds the minimum, then returns the minimum*/

int min(int a, int b){
	int minimum;
	if (a<b) { minimum = a;
			return minimum; }
	else {minimum = b;
			return minimum; }
}

/* Goal is the same as above, but this time, the function that finds the minimum should be void, and takes a third, pass by reference parameter; then puts the minimum in that.*/

void min2(int a, int b, int &c) {
	if (a<b) { c = a; }
	else {c = b;}
}
/* The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum. */
int main() {
	int a, b, c, minimum;
		cout << "Welcome to question 4" << endl;
		cout << "What is the 1st number: " << endl;
		cin >> a ;
		cout << "What is the 2nd number: " <<endl;
		cin >> b ;
	c = min(a,b) ;
		cout << "The minimum of them is " << c << endl;

	min2(a,b,minimum);
		cout << "The minimum of them is " << minimum << endl;
return 0;
}