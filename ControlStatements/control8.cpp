// This program asks the user for a limit (at least 3) and prints
// all the prime numbers up to that limit.
// It uses trial division to test for primes.

#include <iostream>
using namespace std;

int main() {
	// get limit
	int limit;
	cout << "Enter the limit: ";
	cin >> limit;

	// print 2 and the odd primes
	cout << "2";
	for(int i = 3; i <= limit; i += 2)
	{
		bool composite = false; // i is composite?
		for(int j = 3; j * j <= i; j += 2) 
		{
			if(i % j == 0) 
			{
				composite = true;
				break;
			}
		}
		if(!composite)
			cout << " " << i;
	}
	cout << endl;

	return 0;
}

/* Notes:

- A number is prime if the only factors are 1 and itself.
- The only even prime number is 2, so we just print it and
  test odd numbers from then on.
- It is only necessary to test for odd factors of i, because
  we know i is odd, and an odd number cannot have even factors.
- It is only necessary to test factors up to j = sqrt(i) because
  if j divides i, then i/j also divides i, and both cannot be
  greater than sqrt(i).
- The test j*j <= i is faster than j <= sqrt(i) because multiplication
  is faster than square root.  Also, the first test avoids any
  possibility of floating point roundoff error.
- The break statement is an optimization.  After finding a factor
  it is not necessary to keep looking.
*/