#include<iostream>




using namespace std;




	


	//function to count number of even numbers in the array

	int countEven(int *ptr, int k) {

	int e = 0;//Parameter that is a count of the even numbers

		

	//Loop and condition	

	for (int i = 0; i<k; i++) {

	

	if ((*(ptr + i))%2 == 0) {

	e++;

	}


	}


	return e;


	}



	




















	int main () {


	int n, r;


	cout<<"Enter the number of elements you want in your array ";

	cin>>n;


	cout<<endl;


	int arr[n];

	int *ptr = arr;


	cout<<"Enter the elements of the array "<<endl;
	
	

	for (int i = 0; i<n; i++) {


	cin>>*(ptr + i);

	}

	cout<<endl;


	r = countEven(ptr, n);


	cout<<"The number of even numbers is "<<r<<" ."<<endl;






	}


	
