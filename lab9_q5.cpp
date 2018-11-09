#include<iostream>



using namespace std;







	int main () {

	

	char arr[10] = "abcde";

	char *charptr = arr; //this pointer points to the first element of the array
	
	
		
	//loop to print in reverse order
	
	for (int i = 0 ; i <= 4; i++) {

	cout<<*((4-i)+charptr);


	}




	cout<<endl;











	}
