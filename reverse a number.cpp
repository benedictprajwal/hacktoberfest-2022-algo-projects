#include<bits/stdc++.h>
using namespace std;

int main(){
	// 'n' is the number we want to reverse.
	int n = 1234;
	
	// Printing the original number. 
	cout << "The original number is " << n;
	
	// Declare and initialize answer ('rev') to 0. 
	int rev = 0;
	
	// The magic happens here :P
	while ( n != 0 ){
		// Multiply rev by 10.
		rev = rev * 10;
		
		// Add n modulus 10 to rev.
		rev = rev + (n % 10);
		
		// Divide n by 10.
		n = n / 10;
	}
	
	// Print the reversed number.
	cout << "\nThe reversed number is " << rev;
	
	return 0;
}
