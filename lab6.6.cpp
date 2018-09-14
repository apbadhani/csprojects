//include library
#include<iostream>
using namespace std;

/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/

char toUpper(char a) {
	char b;
		if (a>93) {b=a-32 ;};
	return b;
		}

			
/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value*/

char toLower(char a) {
	char b;
		if (a<93) {b=a+32; };
	return b;
		}

			
/*Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa*/

int main () {
	char x, ch, ch1;
			cout << "Welcome to question no.7" << endl;
			cout << "Type any alphabetical character : " ;
			cin >> x ;
		ch = toUpper(x) ;
		ch1 = toLower(x);
	if ( x > 93 ) { cout << "The character is in lower case. The upper case is " << ch << endl;}
	else { cout << "The character is in upper case.  The lower case is " << ch1 << endl;}
return 0;
}