#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	bool isPrime[n + 1];
	memset(isPrime, true, sizeof(isPrime));

	for (int p = 2; p * p <= n; p++) {
		if (isPrime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				isPrime[i] = false;
		}
	}


	for (int p = 2; p <= n; p++)
		if (isPrime[p])
			cout << p << " "; // prints only the prime numbers 
}

int main()
{
	int n = 28;
	cout << "The prime numbers smaller "
		<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}