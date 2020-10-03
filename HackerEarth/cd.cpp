#include <iostream>

using namespace std;

int main()
{
	int l,r,k;

	cin >> l >> r >> k;

	int sum = 0;

	for(int i = l; i<=r; i++) {

		if(i%k == 0) {

			sum++;

		}

	}

	cout << sum << endl;

	return 0;

}


