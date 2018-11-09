#include<iostream>




using namespace std;




	bool cont (char *pt, char let) {

	bool TRUE = 1 ;
	bool FALSE = 0 ;

	
	for (int i = 0; *(pt + i) != '\0'; i++) {

	
	if (let == *(pt + i)) {

	return TRUE; 

	}


	else return FALSE;


	}


	}

	


	







	int main () {


	int n;

	char letter;

	bool r;


	cout<<"Enter a character ";

	cin>>letter;
 

	cout<<"Enter the number of characters you want in your array ";

	cin>>n;

	cout<<endl;



	char arr[n];

	char *ptr = arr;



	cout<<"Enter the elements of the array ";

	cout<<endl;


	for (int i = 0; i<n; i++) {

	cin>>*(ptr + i);

	cout<<endl;

	}


	cout<<endl;

	r = cont (ptr, letter);

	if (r==1) {cout<<"TRUE";}

	else {cout<<"FALSE";}

	cout<<endl;



	}





	 



	
