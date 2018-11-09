#include<iostream>



using namespace std;



	void revString(char* ptr) {
	
		

	int i = 0;		

	while ( *(ptr + i) != '\0') {

	i++;
	
	}

	cout<<i<<endl;

	char s1[i+1];

	char *pt1 = s1;

	for (int j=0; j<=i; j++) {


	*(pt1 + j) = *(ptr +(i-j));

	}

	

	for (int k = 0; k<=i; k++) {

	cout<<*(pt1 + k);

	
  	



	}

	cout<<endl;


	}






















	int main() {
	
	  char s[10] = "abcde";



	  revString(s);  

	  return 0;
	}


