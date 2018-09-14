//include library
#include <iostream>
using namespace std;

/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value*/
int sumEvenNumbers(int a , int b) {
	int sum=0, i;
		for (i=a ; i<=b; i++) { if (i % 2 == 0) { sum = sum + i; } }
	return sum;
				}

/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value*/
int sumOddNumbers(int a, int b) {
	int sum=0, i;
		for (i=a ; i<=b ; i++) { if (i%2 != 0) { sum = sum + i; } }
	return sum;			
		
				}

/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. */

int sumSquareOddNumbers(int a, int b) {
	int sum = 0, i = a;
		while ( i<b ) { if ( i%2 != 0 ) {sum = sum + (i*i); } i++; }
	return sum;
				}


/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value*/

int sumSquareEvenNumbers (int a, int b) {
	int sum = 0, i = a;
		while ( i<=b ) { if ( i%2 == 0 ) {sum = sum + (i*i); } i++; }
	return sum;
				}


/*Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values
*/ 

int main() {
	int a, b, sumEven , sumOdd , sumSquareEven, sumSquareOdd;
		cout << "Welcome to question no. 6" << endl;
		cout << "Write the first number : " ;
		cin >> a ;
		cout << "Write the second number : " ;
		cin >> b ;
	
	sumEven = sumEvenNumbers(a,b) ;
	sumOdd = sumOddNumbers(a,b) ;
	sumSquareEven = sumSquareEvenNumbers(a,b) ;
	sumSquareOdd = sumSquareOddNumbers(a,b) ;


		cout << "The sum of even numbers between " << a << " and " << b << " is " << sumEven << endl;
		cout << "The sum of odd numbers between " << a << " and " << b << " is " << sumOdd << endl;
		cout << "The sum of sqaure of even number between " << a << " and " << b << " is " << sumSquareEven << endl;
		cout << "The sum of Odd number between " << a << " and " << b << " is " << sumSquareOdd << endl;

return 0;
}