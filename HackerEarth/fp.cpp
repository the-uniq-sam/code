#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	long long int product = 1;

	for(int i = 0; i<n; i++) {

		long long int a;
		cin >> a;

		product = (product*a)%(1000000000 + 7);

	}

	cout << product << endl;

	return 0;

}


