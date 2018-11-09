#include<iostream>


using namespace std;





	int main (void) {

	char s[10]; 

	cout << "Input about 10 characters of string ";
	cin >> s;

	cout<<endl;

	

	char *p = s;

	

	for (int i = 0; i<15; i++) {

	cout<<p+i<<endl;

	}
	
	return 0;
	
	}

	

