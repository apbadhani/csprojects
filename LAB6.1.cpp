
//include library
#include <iostream>
using namespace std;

/*Write a program with a function that takes two int parameters, adds them together, then returns the sum.*/
int askUser(int a, int b){
	int sum = a + b;
	return sum;
}

/* Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.*/


void askUser2(int a, int b, int &c) {
	       c = a + b;
}
/*The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.*/

int main () {
	int a, b, c, sum ;
		cout << " Welcome to question no. 2" <<endl ;
		cout << "Enter no. 1: "<<endl ;
		cin >> a;
		cout << "Enter no. 2: "<<endl ;
		cin >> b;
	c = askUser(a,b);
		cout << "The sum is "<< c <<endl;
	askUser2(a,b,sum);
		cout << "The sum is " << sum <<endl;

return 0;
}