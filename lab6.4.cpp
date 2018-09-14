
//include library 
#include <iostream>
using namespace std;


/*Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform.*/ 

int sum(int a, int b) {
	int sum = a + b;
	return sum;
		}
int max(int a, int b) {
	if (a>b) { int maximum = a;
			return maximum; }
	else { int maximum = b;
			return maximum; }
		}
int min(int a, int b) {
	if (a<b) { int minimum = a;
			return minimum; }
	else { int minimum = b;
			return minimum; }
		}

/*Based on his input, call the required function and display the output*/

int main () {
	int a, b, c, option;
		cout << "Welcome to question no. 5" << endl;
		cout << "Enter 1st number : " ;
		cin >> a ;
		cout << "Enter 2nd number : " ;
		cin >> b ;
		cout << "Enter the number of the operation do you want to perform" << endl ;
		cout << " 1. Sum " << endl;
		cout << " 2. Finding maximum " << endl;
		cout << " 3. Finding minimum " << endl;
		cin >> option;
	if (option==1) { c = sum(a,b);		
				cout << "The sum of the two numbers is " << c << endl ;}
	else if (option==2) { c = max(a,b);
				cout << "The maximum of the two number is " << c << endl ; }
	else if (option==3) { c = min(a,b);
				cout << "The minimum of the two number is " << c << endl; }
	else { cout << "Invalid option! Please try again !!!" << endl; }
return 0;
}