#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; 
	cin >> n;

	int a = 1;
	int b = 0;
	int c = 0;

	while(c<n) {

		b += a;
		c = b+a+a;

		if(n>b && n<=c) {
			cout << "Motu" << endl;
		}
		if(n<=b) {
			cout << "Patlu" << endl;
		}

		b = c;

		a++;

	}

	return 0;

}
