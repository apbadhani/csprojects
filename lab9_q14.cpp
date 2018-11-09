#include<iostream>





using namespace std;



	int main () {
	
	char arr[15] = "Steph Curry";

	char *p = arr;

	

	for (int i = 0; i<15; i++) {

	cout<<arr[i]<<endl;


	}

	cout<<endl;

	

	for (int i = 0; i<15; i++) {

	cout<<*(p+i)<<endl;


	}

	}



	
	
