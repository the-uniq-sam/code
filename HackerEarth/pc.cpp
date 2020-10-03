#include <iostream>

using namespace std;

long long int power(long long int a, long long int b) {

	long long int c = a;

	for(int i = 1; i<b; i++) {

		a *= c;
	}

	return a;
}

int main()
{
	int t;
	cin >> t;

	while(t>0) {

		t--;

		long long int n,k;

		cin >> n >> k;

		long long int a,b;

		a = k+k;

		b = 1;

		while(n>a) {

			n -= a;

			a = power(k,b+1);
			a *= 2;

			b++;

		}

		a = a/2;

		if(n>=a) {

			cout << "Alice" << endl;

		}
		else
		{
			cout << "Bob" << endl;

		}

	}

	return 0;

}
